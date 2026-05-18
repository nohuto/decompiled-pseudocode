/*
 * XREFs of sub_18003C88C @ 0x18003C88C
 * Callers:
 *     sub_18012943F @ 0x18012943F (sub_18012943F.c)
 * Callees:
 *     sub_18003D974 @ 0x18003D974 (sub_18003D974.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003C88C(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_18003D974(a1, v3, **a1);
  return j_j__o_free(*a1);
}
