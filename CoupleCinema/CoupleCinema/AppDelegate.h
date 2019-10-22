//
//  AppDelegate.h
//  CoupleCinema
//
//  Created by 张文轩 on 2019/10/22.
//  Copyright © 2019 张文轩. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

