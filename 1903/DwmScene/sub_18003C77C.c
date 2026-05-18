/*
 * XREFs of sub_18003C77C @ 0x18003C77C
 * Callers:
 *     sub_18012932F @ 0x18012932F (sub_18012932F.c)
 * Callees:
 *     sub_18003D864 @ 0x18003D864 (sub_18003D864.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003C77C(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_18003D864(a1, v3, **a1);
  return j_j__o_free(*a1);
}
