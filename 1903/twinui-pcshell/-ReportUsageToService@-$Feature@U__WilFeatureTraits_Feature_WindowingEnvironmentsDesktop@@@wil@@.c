/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x18003A2D0 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18003BDA8 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x180047834 (_lambda_88a6f648851480fde846e948b133eaba_--operator().c)
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180060F5C (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180064770 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?ChangeDisplayRegionIds@WindowWrapperBase@@UEAAJPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180073C20 (-ChangeDisplayRegionIds@WindowWrapperBase@@UEAAJPEAU-$IVectorView@UDisplayRegionId@WindowingEnvi.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@SA_NXZ @ 0x18008CFB0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@SA_NXZ.c)
 *     ?OnApplyWindowingEnvironmentSettingsRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@3456@@Z @ 0x1802A0710 (-OnApplyWindowingEnvironmentSettingsRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@Wind.c)
 *     ?ApplyPresenter@WindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x1802A69D0 (-ApplyPresenter@WindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnviro.c)
 *     ?get_DisplayRegionIds@WindowWrapperBase@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1802A83D0 (-get_DisplayRegionIds@WindowWrapperBase@@UEAAJPEAPEAU-$IVectorView@UDisplayRegionId@WindowingEnv.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x180394950 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180396F10 (-SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803A1220 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 *     ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803A18B0 (-DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1803A2B30 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803A4250 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803AAAB0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803AB820 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803ABE00 (-DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1803AF200 (-PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ.c)
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803B41D0 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18003C1B0 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180111EDC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop.c)
 */

void wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService()
{
  char v0; // bl
  int v1; // ebx
  __int64 v2; // rax
  int v3; // [rsp+50h] [rbp-9h] BYREF
  __int16 v4; // [rsp+54h] [rbp-5h]
  int v5; // [rsp+58h] [rbp-1h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+3h]
  _BYTE v7[24]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  int v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+84h] [rbp+2Bh]
  int v11; // [rsp+8Ch] [rbp+33h]
  __int128 v12; // [rsp+90h] [rbp+37h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+47h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetCachedFeatureEnabledState();
    v0 = `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data;
  }
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  v3 = 3;
  v1 = v0 & 0x30;
  v2 = wil_details_RecordUsageInPropertyCache(
         v7,
         &`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data,
         2LL,
         0LL);
  v12 = *(_OWORD *)v2;
  v13 = *(_QWORD *)(v2 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      15441787LL,
      2LL,
      1LL,
      &`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data,
      &v12);
    if ( v1 == 32 )
    {
      v8 = 0LL;
      v11 = (`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v10 = 0LL;
      v9 = 2;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(15441787LL, 2LL, 1LL);
    }
  }
  if ( !(_DWORD)v13 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xEB9F7Bu,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
