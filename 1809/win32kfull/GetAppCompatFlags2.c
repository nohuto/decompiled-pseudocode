/*
 * XREFs of GetAppCompatFlags2 @ 0x1C00AC380
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0027A80 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C007E324 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00ABA6C (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00ABA94 (GetWindowFrameMetricForDpi.c)
 *     xxxDWP_UpdateUIState @ 0x1C00ABB00 (xxxDWP_UpdateUIState.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01B85F0 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01F5200 (xxxDDETrackWindowDying.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02311D0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetAppCompatFlags2(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned __int16 v5; // si
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = 0LL;
  v5 = a1;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 632) )
    return *(unsigned int *)(v4 + 648);
  return v3;
}
