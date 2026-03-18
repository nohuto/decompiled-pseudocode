/*
 * XREFs of _IsTopLevelWindow @ 0x1C00C75CC
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x1C00106A0 (NtUserSetBrokeredForeground.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001AF24 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0027220 (NtUserUpdateLayeredWindow.c)
 *     InitializeDPIINFO @ 0x1C002A704 (InitializeDPIINFO.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     FVisCountable @ 0x1C002CD50 (FVisCountable.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0083958 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0084ADC (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00C7314 (IsTopLevelOrLayeredChildWindow.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C00C7604 (ShouldUseLogPixelsForWindowMetrics.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00ECFB0 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00ED5E8 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0113934 (IsWindowBroadcastingDpiToChildrenX.c)
 *     SelectWindowRgn @ 0x1C0114004 (SelectWindowRgn.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0116FF0 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     ShouldHaveShadow @ 0x1C0124350 (ShouldHaveShadow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C012BE50 (NtUserSetWindowCompositionTransition.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0139AB0 (NtUserBeginLayoutUpdate.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151920 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01DDE4C (FeedbackGetWindowSetting.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E611C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01E708C (IsNonClientDpiScalingEnabledX.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01E7B90 (xxxEnableNonClientDpiScaling.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F939C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01FA13C (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01FA19C (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0211720 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     GetGestureConfigSettings @ 0x1C0213E90 (GetGestureConfigSettings.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02299E4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x1C022ABA0 (NtUserDisableImmersiveOwner.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C022BA40 (NtUserForceWindowToDpiForTest.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C022F720 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0234150 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0234A40 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C02359A0 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserSetWindowGroup @ 0x1C0235A80 (NtUserSetWindowGroup.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0236B40 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C023EF00 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 *     GetDisplayAffinity @ 0x1C0244BA8 (GetDisplayAffinity.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 24);
    }
    if ( v1 == v4 )
      return 1LL;
  }
  return result;
}
