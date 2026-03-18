/*
 * XREFs of GetMonitorWorkRect @ 0x1C00B7058
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C00B8F34 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C0131690 (xxxDesktopPaintCallback.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01557D8 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01BF910 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01BFA84 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01DECD4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01E2320 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0233908 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C001D140 (GetMonitorWorkRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00B70E0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

__m128i *__fastcall GetMonitorWorkRect(__m128i *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v5; // xmm0
  __m128i *result; // rax
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v5 = *GetMonitorWorkRectForDpi(&v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
