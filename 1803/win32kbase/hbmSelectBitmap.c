/*
 * XREFs of hbmSelectBitmap @ 0x1C00638E0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectBitmap @ 0x1C00638C0 (GreSelectBitmap.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 */

__int64 __fastcall hbmSelectBitmap(HDC a1)
{
  return hbmSelectBitmapInternal(a1, 1);
}
