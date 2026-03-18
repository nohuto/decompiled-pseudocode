/*
 * XREFs of GetMonitorWorkRect @ 0x1C0090E5C
 * Callers:
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0122E44 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C013CC30 (xxxDesktopPaintCallback.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C015C308 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01D363C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01D37A8 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4BD0 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F8664 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C024C584 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C024C674 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C0090E9C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpiContext @ 0x1C00970E4 (GetMonitorWorkRectForDpiContext.c)
 */

_OWORD *__fastcall GetMonitorWorkRect(_OWORD *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  v5 = *(_OWORD *)GetMonitorWorkRectForDpiContext(v7, a2, CurrentThreadCompositedDpiContext);
  result = a1;
  *a1 = v5;
  return result;
}
