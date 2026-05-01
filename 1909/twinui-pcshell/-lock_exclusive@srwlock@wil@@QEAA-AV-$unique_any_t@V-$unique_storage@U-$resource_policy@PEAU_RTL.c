/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18008E838
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003B0D0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003B1B0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?LockExclusive@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800985C8 (-LockExclusive@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1800A5478 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     _lambda_344d118cde8247a665c09f3d1d41eb56_::operator() @ 0x1800A9F74 (_lambda_344d118cde8247a665c09f3d1d41eb56_--operator().c)
 *     ?StartTracking@AppUsageTracker@@UEAAXXZ @ 0x1800B5240 (-StartTracking@AppUsageTracker@@UEAAXXZ.c)
 *     ?StopTracking@AppUsageTracker@@UEAAXXZ @ 0x1800B52F0 (-StopTracking@AppUsageTracker@@UEAAXXZ.c)
 *     ?Reset@UwpAppStateManager@@UEAAXXZ @ 0x1800B6F00 (-Reset@UwpAppStateManager@@UEAAXXZ.c)
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800B7790 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     ?DeleteCachedExeData@ExeDataCache@@QEAAXPEAUHWND__@@@Z @ 0x1800BABAC (-DeleteCachedExeData@ExeDataCache@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x1800BB388 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1800BB648 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?Reset@Win32AppStateManager@@UEAAXXZ @ 0x1800BB7E0 (-Reset@Win32AppStateManager@@UEAAXXZ.c)
 *     ?SaveAppIdForExePath@ExePathToAppIdMapping@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800BB8F0 (-SaveAppIdForExePath@ExePathToAppIdMapping@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x1800BB974 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BBAD0 (-TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@W.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800C039C (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___::_ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___ @ 0x1800C066C (wil--details--ScopeExitFn__lambda_bf0c31f178687dd5d0af47a31b5c5700___--_ScopeExitFn__lambda_bf0c.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C1590 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x1800C4390 (-SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z.c)
 *     ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x1800C4560 (-ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801905B0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18032CA04 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180337A20 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z @ 0x1803D8330 (-SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x18043C1B0 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 *     ?AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x18043C270 (-AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView.c)
 *     ?AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x18043C2E0 (-AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_.c)
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x18043C610 (-Commit@CAppLayout@@UEAAJXZ.c)
 *     ?RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18043D950 (-RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z @ 0x18043D9E0 (-RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z.c)
 *     ?RemoveItemByIndex@CAppLayout@@UEAAJI@Z @ 0x18043DA80 (-RemoveItemByIndex@CAppLayout@@UEAAJI@Z.c)
 *     ?RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x18043DAD0 (-RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z @ 0x18043DB20 (-RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18043DB70 (-ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18043DBE0 (-SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GrowLayoutRect@CAppLayoutItem@@UEAAXW4ABSOLUTE_DIRECTION@@H@Z @ 0x18043F5B0 (-GrowLayoutRect@CAppLayoutItem@@UEAAXW4ABSOLUTE_DIRECTION@@H@Z.c)
 *     ?SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x18043F940 (-SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z.c)
 *     ?SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18043F9B0 (-SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180441120 (-InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@Ap.c)
 *     ?put_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAUIInspectable@@@Z @ 0x1804416A0 (-put_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAUIInspectable@@@Z.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1804416F0 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 *     ?put_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x180441790 (-put_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJUMultiviewActivationProperties@Activatio.c)
 *     ?put_UserContext@CActivatedEventArgsBase@@UEAAJ_K@Z @ 0x1804417E0 (-put_UserContext@CActivatedEventArgsBase@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}
