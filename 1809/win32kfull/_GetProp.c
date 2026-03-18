/*
 * XREFs of _GetProp @ 0x1C0072450
 * Callers:
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0007F84 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C0009E90 (NtUserSetBrokeredForeground.c)
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C001C6D0 (_GhostWindowFromHungWindow.c)
 *     IsWindowGhosted @ 0x1C001C75C (IsWindowGhosted.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     GetInheritedMonitor @ 0x1C0042D58 (GetInheritedMonitor.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     IsWindowContentProtected @ 0x1C00722D4 (IsWindowContentProtected.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetOldRedirectionBitmap @ 0x1C0072A5C (GetOldRedirectionBitmap.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0073E64 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0073E98 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionFlags @ 0x1C0074038 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00B3568 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C00B8040 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00C9194 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00C9620 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00F2D78 (ShouldProcessHungWindow.c)
 *     NtUserSetWindowBand @ 0x1C0108D50 (NtUserSetWindowBand.c)
 *     _HungWindowFromGhostWindow @ 0x1C011916C (_HungWindowFromGhostWindow.c)
 *     CitGetWindowInfo @ 0x1C011CE10 (CitGetWindowInfo.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0123F50 (NtUserGetWindowMinimizeRect.c)
 *     SetOldRedirectionBitmap @ 0x1C0129084 (SetOldRedirectionBitmap.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C012CB00 (NtUserShutdownBlockReasonQuery.c)
 *     xxxArrangeIconicWindows @ 0x1C0153AD0 (xxxArrangeIconicWindows.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01BF4D4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01C71F4 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01C752C (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01C7928 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01CD8AC (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01D4150 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateGDIWindows @ 0x1C01D48E4 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01D4AAC (UserGetHwnd.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E2534 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E25E8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01E2670 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2A30 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C01E38B8 (xxxFrostCrashedWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C01E3C00 (xxxHandleHealthyWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01E3FD0 (xxxRegisterSiblingFrostWindow.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E49BC (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E7350 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01E87DC (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9430 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01EE0B0 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01F031C (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C01F0D9C (xxxTouchTargetWindow.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F3254 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F35B0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F3910 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F3E54 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendShutdownData @ 0x1C0208490 (xxxSendShutdownData.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0210F60 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C0214220 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C0219110 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C021F2C0 (NtUserfnDDEINIT.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0226380 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     GetDisplayAffinity @ 0x1C022BB78 (GetDisplayAffinity.c)
 * Callees:
 *     GetSharedPropForFilteredProcesses @ 0x1C00E9AD8 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 Prop; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  Prop = RealGetProp(*(_QWORD *)(a1 + 120), a2, a3);
  if ( Prop )
    return Prop;
  if ( v4 )
    return Prop;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 424);
  if ( v9 == PsGetCurrentProcessWin32Process(v8) || (*(_DWORD *)(v9 + 820) & 0x1000000) == 0 )
    return Prop;
  if ( (_WORD)a2 != 0xA914 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)v9, &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
    return Prop;
  }
  return 0LL;
}
