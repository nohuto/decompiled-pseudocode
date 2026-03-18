/*
 * XREFs of GetDpiForSystem @ 0x1C002657C
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     SetTiledRect @ 0x1C001F7E4 (SetTiledRect.c)
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0020124 (CalcSBStuff2.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BCB4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00A8414 (GetWindowBorders.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 *     xxxDrawMenuItem @ 0x1C00AAA94 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6560 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B8310 (xxxCreateWindowSmIcon.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00DBFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     NtUserGetOemBitmapSize @ 0x1C0106520 (NtUserGetOemBitmapSize.c)
 *     NtUserBitBltSysBmp @ 0x1C01065C0 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     InternalGetRealClientRect @ 0x1C010EABC (InternalGetRealClientRect.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C6B50 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01D0CAC (ExpandedMonitorSpace.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01E87DC (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022856C (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02291FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C02294A8 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AD88 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0230A0C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 GetDpiForSystem()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v7; // rdi
  __int64 *v8; // rax

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v1) + 284);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v1, v0) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( !*(_QWORD *)(v4 + 456) )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v1) + 284);
  v7 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v1, v5) )
  {
    v8 = (__int64 *)PsGetThreadWin32Thread(v7);
    if ( v8 )
      v3 = *v8;
  }
  v1 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v3 + 456) + 8LL) + 64LL);
  if ( (v1 & 1) != 0 )
    return 96LL;
  else
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v1) + 284);
}
