/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001AE50 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180021CEC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_f4cd92f2d8fec744b3434a8e4552d084_::operator() @ 0x1800236E4 (_lambda_f4cd92f2d8fec744b3434a8e4552d084_--operator().c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002526C (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800556C0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801384F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18013C430 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x18014EAC0 (-DelayedInitialization@CAppViewManager@@UEAAJXZ.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18014F0C8 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x18014F4E0 (-DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18014F970 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?v_IsTabEligible@CWinRTApplicationView@@EEAAJPEA_N@Z @ 0x18017D1A0 (-v_IsTabEligible@CWinRTApplicationView@@EEAAJPEA_N@Z.c)
 *     ?SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18018DC40 (-SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?IsTabShellEnabled@PrivilegedOperations@@YA_NXZ @ 0x18020A4A0 (-IsTabShellEnabled@PrivilegedOperations@@YA_NXZ.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802106BC (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplate@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18024EFA0 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LazyApplyWindowGroupTemplat.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabIdStability@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18024F024 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabIdStability@@@wil@@CA-AW.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShellSearch@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x18024F0A8 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShellSearch@@@wil@@CA-AW.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@XZ @ 0x18026385C (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180267F60 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@w.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1802B6240 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ @ 0x1802C9DF0 (-RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802F8510 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x18030C128 (_lambda_95ea086e3b8fa056e55a3a293b600f83_--operator().c)
 *     ?SubscribeToServices@VirtualDesktopDataSourceComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180354E10 (-SubscribeToServices@VirtualDesktopDataSourceComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180358E70 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180360374 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1803861E0 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803C0378 (_lambda_eca460099de968d8064ce761a289067f_--operator().c)
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803C0710 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C3740 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803C9FC0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180402B70 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18040F6D8 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180417920 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?UnpinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18041AEA0 (-UnpinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180025710 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180130F58 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(__int64 a1, unsigned __int8 a2)
{
  char v2; // bl
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  int v7; // [rsp+58h] [rbp-9h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp-5h]
  int v9; // [rsp+60h] [rbp-1h] BYREF
  __int16 v10; // [rsp+64h] [rbp+3h]
  _BYTE v11[24]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  unsigned int v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+8Ch] [rbp+2Bh]
  int v15; // [rsp+94h] [rbp+33h]
  __int128 v16; // [rsp+98h] [rbp+37h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+47h]

  v2 = `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
    v2 = `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data;
  }
  LOBYTE(v8) = 1;
  v9 = 0;
  v10 = v8;
  v7 = a2;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v4 = 4;
        break;
      case 2u:
        v4 = 5;
        break;
      case 3u:
        v4 = 6;
        break;
      case 4u:
        v4 = 7;
        break;
      case 5u:
        v4 = 10;
        break;
      case 6u:
        v4 = 11;
        break;
      default:
        if ( (unsigned __int8)(a2 - 100) > 0x31u )
          v4 = 255;
        else
          v4 = (unsigned __int8)(a2 - 100) + 150;
        break;
    }
    v5 = v2 & 0x30;
    v6 = wil_details_RecordUsageInPropertyCache(
           v11,
           &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
           v4,
           0LL);
    v16 = *(_OWORD *)v6;
    v17 = *(_QWORD *)(v6 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      g_wil_details_recordFeatureUsage(
        10727725LL,
        v4,
        1LL,
        &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
        &v16);
      if ( v5 == 32 )
      {
        v12 = 0LL;
        v15 = (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v14 = 0LL;
        v13 = v4;
        ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(10727725LL, v4, 1LL);
      }
    }
    if ( !(_DWORD)v17 )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xA3B12Du,
          (const struct FEATURE_LOGGED_TRAITS *)&v9,
          0LL,
          0,
          (const enum wil_ReportingKind *)&v7,
          0LL,
          0,
          1uLL);
    }
  }
}
