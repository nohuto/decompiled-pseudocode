/*
 * XREFs of hbmSelectBitmap @ 0x1C0085340
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectBitmap @ 0x1C0085320 (GreSelectBitmap.c)
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 * Callees:
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 */

__int64 __fastcall hbmSelectBitmap(HDC a1)
{
  return hbmSelectBitmapInternal(a1, 1);
}
