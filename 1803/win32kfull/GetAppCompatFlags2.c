/*
 * XREFs of GetAppCompatFlags2 @ 0x1C00C3A80
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C003F740 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00C3254 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00C327C (GetWindowFrameMetricForDpi.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C32A4 (xxxDWP_UpdateUIState.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00C83D8 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     zzzHideCursorNoCapture @ 0x1C0197810 (zzzHideCursorNoCapture.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01D0AC4 (xxxDDETrackWindowDying.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2(unsigned __int16 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax

  v2 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( v2 < *(_DWORD *)(ThreadWin32Thread + 624) )
    return 0LL;
  else
    return *(unsigned int *)(ThreadWin32Thread + 640);
}
