/*
 * XREFs of GetMonitorRect @ 0x1C00B709C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     GetPrimaryMonitorRect @ 0x1C00BA848 (GetPrimaryMonitorRect.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01557D8 (_GetOwnerTransformedMonitorRect.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01BF910 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01BFA84 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01BFB44 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01D2320 (GetHimetricScaleForMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01D27D8 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     UserGetHipDeviceInfo @ 0x1C01DA560 (UserGetHipDeviceInfo.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01E2320 (xxxSetInternalWindowPos.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00B70E0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

__m128i *__fastcall GetMonitorRect(__m128i *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v5; // xmm0
  __m128i *result; // rax
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v5 = *GetMonitorRectForDpi(&v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
