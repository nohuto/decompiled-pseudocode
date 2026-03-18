/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00AC334
 * Callers:
 *     GetWindowBorders @ 0x1C00A8414 (GetWindowBorders.c)
 *     xxxGetMenuBarInfo @ 0x1C00ABF90 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C014D710 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C022B200 (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0069244 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2; // eax
  __int64 v8; // r8

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, AppCompatFlags2);
}
