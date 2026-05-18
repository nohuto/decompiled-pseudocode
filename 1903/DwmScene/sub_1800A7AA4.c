/*
 * XREFs of sub_1800A7AA4 @ 0x1800A7AA4
 * Callers:
 *     sub_18012FBA6 @ 0x18012FBA6 (sub_18012FBA6.c)
 * Callees:
 *     sub_1800AA1DC @ 0x1800AA1DC (sub_1800AA1DC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A7AA4(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_1800AA1DC(a1, v3, **a1, *a1, -2LL);
  return j_j__o_free(*a1);
}
