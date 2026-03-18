/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x1C00913E0
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00911AC (GetWindowNCMetrics.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0093238 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, unsigned int a2)
{
  unsigned int AppCompatFlags2; // eax
  int v4; // ecx

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, a2, AppCompatFlags2);
}
