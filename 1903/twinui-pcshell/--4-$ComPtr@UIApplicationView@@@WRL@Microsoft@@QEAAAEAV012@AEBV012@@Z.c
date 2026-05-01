/*
 * XREFs of ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204
 * Callers:
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180056E18 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180056F90 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180057210 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180057548 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x1800584FC (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     CClassicWindowManager::ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___ @ 0x180058624 (CClassicWindowManager--ForEachWindow__lambda_46f7271c5c6893b3d3a15b7b7af716b5___.c)
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180129E2C (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180142FA0 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1801433C4 (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@.c)
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x180145360 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 *     ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x180156110 (-GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z.c)
 *     ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1801577C0 (-TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801BDDD8 (-OnViewCreated@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180217300 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 *     ?SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18021B670 (-SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@F.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1802211F8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18026D4A0 (-RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180270EB0 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180271670 (-UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273FC0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV-$CRefCountedObject@UV.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802744A8 (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1802746E8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1802B1A5C (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180334780 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180348B0C (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x18035B210 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x18035C4A0 (-Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x18035D51C (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x180363F74 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180364440 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?Navigate@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@IW4NavigationType@@@Z @ 0x180364F50 (-Navigate@CMultitaskingViewElementBase@@UEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803650F0 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180365810 (-SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1803660A8 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180366258 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180366780 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180369260 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x180369A14 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 *     ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x18036A250 (-_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Mic.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18036CEC4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x18036DA08 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x18036EEE8 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x180371048 (-_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ.c)
 *     ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x180371E94 (--4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x180371F94 (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 *     ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x180384CD8 (-RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMulti.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x180386E8C (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803AAAB0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803AB4B0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1803B6CF0 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1803B7A70 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803B7FFC (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803BBAC0 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803BF440 (-SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayout.c)
 *     ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1803BFBD8 (-FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1803C25D0 (-Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRA.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x1803C49D4 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803C6144 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1803CB8F0 (-GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803CF780 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x1803CFF18 (-InitDropFeedback@JointResize@@AEAAJH@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803D8530 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x1803DE10C (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 *     ?GetScreenShotForGUID@ScreenClippingBrokerImpl@@EEAAJU_GUID@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E1B20 (-GetScreenShotForGUID@ScreenClippingBrokerImpl@@EEAAJU_GUID@@PEAPEAUIStream@@PEAPEAUIWICBitmapSo.c)
 *     ?TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z @ 0x1803E2ED0 (-TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1803E84F0 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x1803E9870 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x1803F0A84 (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1803F2C20 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x1803F48B0 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x1803F5664 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x18041B2E0 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IApplicationView>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  return a1;
}
