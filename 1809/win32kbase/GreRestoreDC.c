/*
 * XREFs of GreRestoreDC @ 0x1C0108D40
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  return GreRestoreDCInternal(a1, a2, 1, 0);
}
