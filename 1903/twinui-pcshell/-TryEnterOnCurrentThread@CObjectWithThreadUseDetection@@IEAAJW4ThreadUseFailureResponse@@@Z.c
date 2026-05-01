/*
 * XREFs of ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070
 * Callers:
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180056D50 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180057210 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180057430 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180057770 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x1800681B4 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180110BE0 (-DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x18011B820 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x18011CD94 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180126DF0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x180129A40 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 *     ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180129C20 (-IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802C8AE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x1802C8CD0 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802C8D80 (-DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLA.c)
 *     ?GetViewType@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802C9910 (-GetViewType@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@.c)
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1802C9B90 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802CA5A0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?IsFrameWindowForHost@XamlAllUpViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x1802CC070 (-IsFrameWindowForHost@XamlAllUpViewHost@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewVisible@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z @ 0x1802CC200 (-IsViewVisible@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z.c)
 *     ?MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802CC290 (-MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@XamlAllUpViewHost@@UEAAJXZ @ 0x1802CC980 (-OnMonitorFrameDismissAnimationCompleted@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1802CE0A0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1802CFB80 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1802D02E0 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewVirtualDesktopChanged@XamlAllUpViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1802D0550 (-ViewVirtualDesktopChanged@XamlAllUpViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?VirtualDesktopDestroyBegin@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1802D0750 (-VirtualDesktopDestroyBegin@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyFailed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1802D0810 (-VirtualDesktopDestroyFailed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1802D0910 (-VirtualDesktopDestroyed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802D8DC0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x1802D9840 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1802D9A80 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802D9F50 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802DB960 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802DCBC0 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802DD1F0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x18033FFB0 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 *     ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x1803405D0 (-SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180349740 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803497E0 (-CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAU.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180349890 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180349AB0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180349BF0 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x18034A680 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18034EBF0 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180350980 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1803515D0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?GetViewType@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180351800 (-GetViewType@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES.c)
 *     ?IsViewVisible@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJPEAH@Z @ 0x1803518A0 (-IsViewVisible@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJPEAH@Z.c)
 *     ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180351EA0 (-Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180386560 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x180386980 (-EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ.c)
 *     ?GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitionTargetSpecialFlags@@@Z @ 0x180386A60 (-GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitio.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180386FF0 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 *     ?OnSelectedViewChangedForGroup@CDesktopPositioner@@AEAAJPEAUIInspectable@@0@Z @ 0x1803A2740 (-OnSelectedViewChangedForGroup@CDesktopPositioner@@AEAAJPEAUIInspectable@@0@Z.c)
 *     ?TabSwitchRequested@CDesktopPositioner@@UEAAJAEBU_GUID@@PEAUIApplicationView@@1@Z @ 0x1803A47C0 (-TabSwitchRequested@CDesktopPositioner@@UEAAJAEBU_GUID@@PEAUIApplicationView@@1@Z.c)
 *     ?ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TAB_GROUP_FLAGS@@@Z @ 0x1803A4D80 (-ViewChangedTabGroup@CDesktopPositioner@@UEAAJPEAUIApplicationView@@AEBU_GUID@@W4VIEW_CHANGED_TA.c)
 *     ?ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ @ 0x1803A6ED0 (-ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ.c)
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803BB900 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803BBAC0 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1803BC760 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803BC870 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1803BCBE0 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803BDD60 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1803BE1C0 (-SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z.c)
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803BE720 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1803BE880 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803BF170 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803BF440 (-SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayout.c)
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1803BF6B0 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?ClearLayout@PPILayoutOperation@@UEAAJXZ @ 0x1803BFAF0 (-ClearLayout@PPILayoutOperation@@UEAAJXZ.c)
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803BFD20 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800740CC (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801176FC (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

__int64 __fastcall CObjectWithThreadUseDetection::TryEnterOnCurrentThread(__int64 a1, int a2)
{
  int ApartmentId; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(a1 + 44)) && *(_DWORD *)(a1 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v7);
    if ( ApartmentId >= 0 && v7 != *(_DWORD *)(a1 + 40) )
      ApartmentId = -2147417842;
    if ( a2 != 1 )
    {
LABEL_11:
      if ( ApartmentId < 0 )
        return (unsigned int)ApartmentId;
      return !TryEnterCriticalSection((LPCRITICAL_SECTION)a1) ? 0x8001010E : 0;
    }
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId);
      goto LABEL_11;
    }
  }
  return !TryEnterCriticalSection((LPCRITICAL_SECTION)a1) ? 0x8001010E : 0;
}
