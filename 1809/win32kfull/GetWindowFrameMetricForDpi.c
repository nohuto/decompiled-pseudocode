/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x1C00ABA94
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 * Callees:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00ABABC (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, unsigned int a2)
{
  unsigned int AppCompatFlags2; // eax
  int v4; // ecx

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, a2, AppCompatFlags2);
}
