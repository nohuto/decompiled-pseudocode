/*
 * XREFs of GetMonitorWorkRect @ 0x1C0066BF8
 * Callers:
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C006565C (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C00666E0 (_GetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxDesktopPaintCallback @ 0x1C010F060 (xxxDesktopPaintCallback.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0133E00 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C019E3E8 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C019E554 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01BF838 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C020A640 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C020A72C (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C0035AB4 (GetMonitorWorkRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0066C3C (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

_OWORD *__fastcall GetMonitorWorkRect(_OWORD *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v5 = *GetMonitorWorkRectForDpi(&v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
