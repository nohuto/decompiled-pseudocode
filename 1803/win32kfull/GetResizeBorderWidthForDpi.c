/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x1C00C3254
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0017EC8 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1)
{
  unsigned int AppCompatFlags2; // eax
  __int64 v3; // r8
  __int64 v4; // r9

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2, v3, v4);
}
