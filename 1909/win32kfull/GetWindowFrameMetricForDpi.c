/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x1C012C374
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0129D6C (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 * Callees:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0033F60 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, unsigned int a2)
{
  int AppCompatFlags2; // eax
  __int64 v4; // rcx

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, a2, AppCompatFlags2);
}
