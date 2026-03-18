/*
 * XREFs of GetDpiForSystem @ 0x1C00AA6E4
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     NtUserGetOemBitmapSize @ 0x1C000B7D0 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C000B9D0 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C002FFD0 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0030084 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     GetWindowNCMetrics @ 0x1C00911AC (GetWindowNCMetrics.c)
 *     CalcSBStuff2 @ 0x1C00AA57C (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C00AA7A4 (CalcSBStuff.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6100 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B9750 (xxxCreateWindowSmIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E2E38 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     SetTiledRect @ 0x1C01111A0 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D9F14 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01E581C (ExpandedMonitorSpace.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3D8C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FE164 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240BF8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241F54 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243DB8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetDpiForSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v14; // rdi
  __int64 *v15; // rax

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) != 0 )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v5, v4) + 284);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4, v6, v7) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  if ( !*(_QWORD *)(v10 + 448) )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v5, v4) + 284);
  v14 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4, v11, v12) )
  {
    v15 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v15 )
      v9 = *v15;
  }
  v5 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v9 + 448) + 8LL) + 64LL);
  if ( (v5 & 1) != 0 )
    return 96LL;
  else
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v5, v4) + 284);
}
