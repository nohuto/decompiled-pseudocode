/*
 * XREFs of ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C
 * Callers:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18000E4C8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180045DB8 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18005B438 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180073778 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x1800FA5DC (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_1800FA5DC.c)
 *     ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800FCC40 (-SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     _lambda_5ad3673c6eb74b2ca3979c012125fa9b_::operator() @ 0x1800FF1EC (_lambda_5ad3673c6eb74b2ca3979c012125fa9b_--operator().c)
 *     ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180105090 (-CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicati.c)
 *     ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180106BDC (--$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@.c)
 *     ??$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameService@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180113704 (--$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___ @ 0x180118724 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_5bfe2b9a5cf375f597f95bcb5ddfbfae___.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18011A1F8 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180120260 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180121914 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x180124DD0 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180124E8C (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801280FC (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801569EC (-RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180157BFC (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18016699C (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180174210 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017A200 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801821A4 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180243778 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x180245450 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 *     ?SetObject@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180274B9C (-SetObject@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180274CE0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802837B0 (-Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x18029F8D0 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1802E2AB0 (-SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorManager@MultitaskingViewGestureHandler@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1802E32C0 (-SetMonitorManager@MultitaskingViewGestureHandler@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1802E55C0 (-SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1802E8090 (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1802E9564 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x1802F59F0 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x18031E7D8 (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@@Z @ 0x18031F898 (-RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingView.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18032CE00 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x180354EF0 (-SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x18035D570 (-SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@AppResizeView@@UEAAJPEAUIUnknown@@@Z @ 0x1803608F0 (-SetSite@AppResizeView@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z @ 0x1803643F0 (-SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180365534 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x18036FED0 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180373300 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x18038F0F0 (-DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IUnknown>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
