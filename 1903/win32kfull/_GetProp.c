/*
 * XREFs of _GetProp @ 0x1C00C7C1C
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x1C00106A0 (NtUserSetBrokeredForeground.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0019940 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetOldRedirectionBitmap @ 0x1C0041B78 (SetOldRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     GetOldRedirectionBitmap @ 0x1C0044C28 (GetOldRedirectionBitmap.c)
 *     IsWindowContentProtected @ 0x1C0049068 (IsWindowContentProtected.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00839B0 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0084ADC (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ParkIcon @ 0x1C0084DD8 (ParkIcon.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0085FC8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C008AB90 (NtUserGetWindowCompositionAttribute.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C008BADC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C008C528 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     _HungWindowFromGhostWindow @ 0x1C00910A8 (_HungWindowFromGhostWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     _GhostWindowFromHungWindow @ 0x1C0094354 (_GhostWindowFromHungWindow.c)
 *     IsWindowGhosted @ 0x1C00959E0 (IsWindowGhosted.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetInheritedMonitor @ 0x1C00CA354 (GetInheritedMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserSetWindowBand @ 0x1C0110360 (NtUserSetWindowBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     CitGetWindowInfo @ 0x1C0123110 (CitGetWindowInfo.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C012E650 (NtUserGetWindowMinimizeRect.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C013ABA0 (NtUserShutdownBlockReasonQuery.c)
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C0150500 (xxxHandleHealthyWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01509A0 (xxxRegisterGhostWindow.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0150C18 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151920 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0151A5C (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0159B10 (xxxArrangeIconicWindows.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D31F4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01DA5B0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01DA8E4 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAD10 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E1E10 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E94C0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateGDIWindows @ 0x1C01EA0F0 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01EA2BC (UserGetHwnd.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F9328 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F9498 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C01F96F4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F9820 (xxxRegisterSiblingFrostWindow.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FA254 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FE164 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEE04 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C02046CC (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C020669C (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C0207040 (xxxTouchTargetWindow.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C0209504 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0209868 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209D54 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C020A514 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendShutdownData @ 0x1C021FE54 (xxxSendShutdownData.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0228ED0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C022BF90 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C0230F60 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C0237630 (NtUserfnDDEINIT.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     GetDisplayAffinity @ 0x1C0244BA8 (GetDisplayAffinity.c)
 * Callees:
 *     GetSharedPropForFilteredProcesses @ 0x1C00F5FE0 (GetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 Prop; // rdi
  __int64 result; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, a3);
  result = 0LL;
  if ( Prop || v4 || (*(_DWORD *)(a1 + 328) & 0x10) == 0 )
    return Prop;
  if ( (_WORD)a2 != 0xA914 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(a1 + 16) + 416LL), &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
    return Prop;
  }
  return result;
}
