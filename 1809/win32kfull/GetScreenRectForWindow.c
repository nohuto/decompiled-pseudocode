/*
 * XREFs of GetScreenRectForWindow @ 0x1C0241034
 * Callers:
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C010DD3C (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C02223E4 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C001D1D4 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C007ABA4 (GetScreenRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned __int16 WindowCompositedDpi; // ax
  __m128i v4; // xmm0
  __m128i *result; // rax
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a2);
  v4 = *GetScreenRectForDpi(&v6, WindowCompositedDpi);
  result = a1;
  *a1 = v4;
  return result;
}
