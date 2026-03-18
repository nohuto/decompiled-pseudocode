/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C00ABA6C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C006BC28 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  unsigned int AppCompatFlags2; // eax
  __int64 v3; // r8

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2, v3);
}
