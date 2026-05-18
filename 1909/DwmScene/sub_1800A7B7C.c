/*
 * XREFs of sub_1800A7B7C @ 0x1800A7B7C
 * Callers:
 *     sub_18012FBA8 @ 0x18012FBA8 (sub_18012FBA8.c)
 * Callees:
 *     sub_1800AA154 @ 0x1800AA154 (sub_1800AA154.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A7B7C(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_1800AA154(a1, v3, **a1);
  return j_j__o_free(*a1);
}
