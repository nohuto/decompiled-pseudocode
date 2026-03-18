/*
 * XREFs of GreRestoreDC @ 0x1C0071730
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1)
{
  return GreRestoreDCInternal(a1);
}
