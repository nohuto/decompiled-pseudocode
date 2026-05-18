/*
 * XREFs of sub_1800A7A6C @ 0x1800A7A6C
 * Callers:
 *     sub_18012FA98 @ 0x18012FA98 (sub_18012FA98.c)
 * Callees:
 *     sub_1800AA044 @ 0x1800AA044 (sub_1800AA044.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A7A6C(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_1800AA044(a1, v3, **a1);
  return j_j__o_free(*a1);
}
