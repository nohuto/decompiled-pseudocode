/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C012C1DC
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0129D6C (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0033FA4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  int AppCompatFlags2; // eax

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2);
}
