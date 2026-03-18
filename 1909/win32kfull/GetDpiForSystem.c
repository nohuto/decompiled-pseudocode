/*
 * XREFs of GetDpiForSystem @ 0x1C004B4C4
 * Callers:
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025590 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025644 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     CalcSBStuff2 @ 0x1C004B35C (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     xxxCreateClassSmIcon @ 0x1C0056EB0 (xxxCreateClassSmIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     NtUserGetOemBitmapSize @ 0x1C00EA930 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00EAB30 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     SetTiledRect @ 0x1C00EC050 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 *     xxxCreateWindowSmIcon @ 0x1C0109E88 (xxxCreateWindowSmIcon.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     GetWindowNCMetrics @ 0x1C0129D6C (GetWindowNCMetrics.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C01300C8 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C013C600 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D9D94 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01E569C (ExpandedMonitorSpace.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FDEB4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02405D8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241934 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243678 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0245F44 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C0249B68 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetDpiForSystem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v11; // rdi
  __int64 *v12; // rax

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3) & 0xF) != 0 )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v4, v3) + 284);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3, v5) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  if ( !*(_QWORD *)(v8 + 448) )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v4, v3) + 284);
  v11 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3, v9) )
  {
    v12 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v12 )
      v7 = *v12;
  }
  v4 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v7 + 448) + 8LL) + 64LL);
  if ( (v4 & 1) != 0 )
    return 96LL;
  else
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v4, v3) + 284);
}
