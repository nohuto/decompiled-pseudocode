/*
 * XREFs of sub_180121F54 @ 0x180121F54
 * Callers:
 *     sub_180134842 @ 0x180134842 (sub_180134842.c)
 * Callees:
 *     sub_1801235CC @ 0x1801235CC (sub_1801235CC.c)
 */

__int64 __fastcall sub_180121F54(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1801235CC(a1, v3, **a1);
  return j_j__o_free(*a1);
}
