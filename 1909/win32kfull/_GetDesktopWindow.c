/*
 * XREFs of _GetDesktopWindow @ 0x1C006C4B0
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C000B38C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0010034 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     _GetWindowPlacement @ 0x1C00140C0 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0014518 (CkptUpdate.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00192CC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     GetLastTopMostWindow @ 0x1C001AECC (GetLastTopMostWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C001C3B4 (ImeCanDestroyDefIMEforChild.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0023074 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00513E8 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 *     UnlinkWindow @ 0x1C006A598 (UnlinkWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006BA24 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0070A5C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     NtUserGetAncestor @ 0x1C00D5E10 (NtUserGetAncestor.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E0250 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetTiledRect @ 0x1C00EC050 (SetTiledRect.c)
 *     xxxGetUpdateRgn @ 0x1C00EC440 (xxxGetUpdateRgn.c)
 *     xxxMoveWindow @ 0x1C00ED66C (xxxMoveWindow.c)
 *     SelectWindowRgn @ 0x1C00EE40C (SelectWindowRgn.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     NtUserSetParent @ 0x1C00FCBD0 (NtUserSetParent.c)
 *     _GetAncestor @ 0x1C010A114 (_GetAncestor.c)
 *     xxxHandleWindowPosChanged @ 0x1C010E9FC (xxxHandleWindowPosChanged.c)
 *     xxxPaintRect @ 0x1C012BDA4 (xxxPaintRect.c)
 *     xxxGetUpdateRect @ 0x1C012ECD8 (xxxGetUpdateRect.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     SetHungFlag @ 0x1C0135468 (SetHungFlag.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C013A314 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01526E0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxActivateEnabledPopup @ 0x1C015A4AC (xxxActivateEnabledPopup.c)
 *     xxxSoundSentry @ 0x1C015BAE0 (xxxSoundSentry.c)
 *     _ChildWindowFromPointEx @ 0x1C015BF0C (_ChildWindowFromPointEx.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     PowerOnGdi @ 0x1C01616D0 (PowerOnGdi.c)
 *     GetTopMostInsertAfter @ 0x1C01D3F8C (GetTopMostInsertAfter.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D6298 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     xxxMetricsRecalc @ 0x1C01DA764 (xxxMetricsRecalc.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2740 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x1C01F2EC0 (EditionPointerParentNotify.c)
 *     xxxSetInternalWindowPos @ 0x1C01F83B4 (xxxSetInternalWindowPos.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F90EC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F91E8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01F9F38 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0221098 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023F8E0 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     _RealChildWindowFromPoint @ 0x1C0244854 (_RealChildWindowFromPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopWindow(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return result;
}
