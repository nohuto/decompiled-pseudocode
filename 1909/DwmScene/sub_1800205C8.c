/*
 * XREFs of sub_1800205C8 @ 0x1800205C8
 * Callers:
 *     sub_180128610 @ 0x180128610 (sub_180128610.c)
 *     sub_180128623 @ 0x180128623 (sub_180128623.c)
 *     sub_180130CFE @ 0x180130CFE (sub_180130CFE.c)
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 */

__int64 __fastcall sub_1800205C8(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180026664(a1, v3, **a1, *a1);
  return j_j__o_free(*a1);
}
