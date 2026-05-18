/*
 * XREFs of sub_1800A7BB4 @ 0x1800A7BB4
 * Callers:
 *     sub_18012FCB6 @ 0x18012FCB6 (sub_18012FCB6.c)
 * Callees:
 *     sub_1800AA2EC @ 0x1800AA2EC (sub_1800AA2EC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A7BB4(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_1800AA2EC(a1, v3, **a1, *a1, -2LL);
  return j_j__o_free(*a1);
}
