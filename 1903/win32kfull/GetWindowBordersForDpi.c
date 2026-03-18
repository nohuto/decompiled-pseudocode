/*
 * XREFs of GetWindowBordersForDpi @ 0x1C0092084
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C002104C (xxxGetMenuBarInfo.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     FindNCHit @ 0x1C012D5D8 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01549AC (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C024423C (xxxCalcCaptionButton.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246B40 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0093158 (GetWindowBordersForDpiWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // ebx
  unsigned int AppCompatFlags2; // eax
  int v8; // r8d

  v6 = a2;
  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2, a3, a4);
  return GetWindowBordersForDpiWithCompatFlags2(a1, v6, v8, 0, a5, AppCompatFlags2);
}
