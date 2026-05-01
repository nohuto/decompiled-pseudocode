/*
 * XREFs of ?ResultFromKnownLastError@@YAJXZ @ 0x180136190
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18000F0A8 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180037010 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1800375F0 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18003CBAC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18003DE20 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18003DF60 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0003_0001@@_K_J@Z @ 0x18003E240 (-NotifyWindowWithQEvent@CPrivilegedNotificationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18003EBA0 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x180054E20 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18006A8D0 (-CanChangeForeground@@YAJXZ.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x180082DD0 (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1801398D0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180140B88 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180140F24 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18014331C (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x18014FCF4 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x1801518C0 (-ResultFromWin32Bool@@YAJH@Z.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18015E86C (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ?GetRectInternal@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x1801640C0 (-GetRectInternal@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBandId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x18016E310 (-GetBandId@CImmersiveApplicationWindow@@UEAAJPEAK@Z.c)
 *     ?GetThreadId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x18016E350 (-GetThreadId@CImmersiveApplicationWindow@@UEAAJPEAK@Z.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1801798E0 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1801AE26C (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1801B6758 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@YAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1801C7C24 (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1801DFFF4 (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x180204160 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1802B28A0 (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1802B2C3C (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x18030FC78 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x180366720 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 *     ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x1803670F0 (-_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InitializeTimer @ 0x180393050 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_InitializeTimer.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InitializeTimer @ 0x1803E4964 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InitializeTimer.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_InitializeTimer @ 0x1803E4A28 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_InitializeTimer.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_255728157cf8e92998065ff06efe801f___ @ 0x1803EADF0 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___ea_1803EADF0.c)
 *     ?AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z @ 0x1803EBBF8 (-AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z.c)
 *     ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x1803F9040 (-_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z.c)
 *     ?SetDefaultForeground@CVirtualDesktopDefaultForegroundHandler@@UEAAJXZ @ 0x1804098C0 (-SetDefaultForeground@CVirtualDesktopDefaultForegroundHandler@@UEAAJXZ.c)
 *     ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x180426460 (-GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180426700 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180426790 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ @ 0x1804269B0 (-_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x180426C34 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x180427684 (-VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1804277B4 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180427890 (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x180433B44 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 *     s_DrawGlyph @ 0x1804366E0 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x180436980 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItem @ 0x180436F44 (s_OnDrawItem.c)
 *     s_OnMeasureItem @ 0x1804378F0 (s_OnMeasureItem.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180437CDC (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180438084 (-CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1804381A0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x180438334 (-OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveCont.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1804388EC (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x18043907C (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromKnownLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result >= 0 )
    return -2147467259;
  return result;
}
