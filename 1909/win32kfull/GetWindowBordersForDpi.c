/*
 * XREFs of GetWindowBordersForDpi @ 0x1C012DCF8
 * Callers:
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     MNPositionSysMenu @ 0x1C015576C (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0243AFC (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246400 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0033E80 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int AppCompatFlags2; // eax
  __int64 v8; // r8

  AppCompatFlags2 = GetAppCompatFlags2(39168LL);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, AppCompatFlags2);
}
