/*
 * XREFs of sub_1800D505C @ 0x1800D505C
 * Callers:
 *     sub_1801331A1 @ 0x1801331A1 (sub_1801331A1.c)
 * Callees:
 *     sub_1800D62C8 @ 0x1800D62C8 (sub_1800D62C8.c)
 */

__int64 __fastcall sub_1800D505C(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800D62C8(a1, v3, **a1);
  return j_j__o_free(*a1);
}
