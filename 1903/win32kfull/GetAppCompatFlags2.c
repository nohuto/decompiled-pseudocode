/*
 * XREFs of GetAppCompatFlags2 @ 0x1C0092010
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C004ADA0 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00913B8 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00913E0 (GetWindowFrameMetricForDpi.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00A71C0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01CC430 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C020C0EC (xxxDDETrackWindowDying.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetAppCompatFlags2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned __int16 v7; // si
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  v7 = a1;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 624) )
    return *(unsigned int *)(v6 + 640);
  return v5;
}
