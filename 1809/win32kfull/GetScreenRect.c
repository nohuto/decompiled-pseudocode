/*
 * XREFs of GetScreenRect @ 0x1C00B9150
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01C9160 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01CDF84 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01D27D8 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01D2E08 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0223AF8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C007ABA4 (GetScreenRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00B70E0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __m128i v4; // xmm0
  __m128i *result; // rax
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1, a2);
  v4 = *GetScreenRectForDpi(&v6, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v4;
  return result;
}
