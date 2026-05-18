/*
 * XREFs of sub_1800A299C @ 0x1800A299C
 * Callers:
 *     sub_18012F74A @ 0x18012F74A (sub_18012F74A.c)
 * Callees:
 *     sub_1800A5DF8 @ 0x1800A5DF8 (sub_1800A5DF8.c)
 */

__int64 __fastcall sub_1800A299C(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800A5DF8(a1, v3, **a1);
  return j_j__o_free(*a1);
}
