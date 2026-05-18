/*
 * XREFs of sub_1800204B8 @ 0x1800204B8
 * Callers:
 *     sub_180128500 @ 0x180128500 (sub_180128500.c)
 *     sub_180128513 @ 0x180128513 (sub_180128513.c)
 *     sub_180130BEE @ 0x180130BEE (sub_180130BEE.c)
 * Callees:
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 */

__int64 __fastcall sub_1800204B8(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180026554(a1, v3, **a1, *a1);
  return j_j__o_free(*a1);
}
