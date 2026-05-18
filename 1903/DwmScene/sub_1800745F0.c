/*
 * XREFs of sub_1800745F0 @ 0x1800745F0
 * Callers:
 *     sub_18012D99E @ 0x18012D99E (sub_18012D99E.c)
 *     sub_18012DBED @ 0x18012DBED (sub_18012DBED.c)
 * Callees:
 *     sub_18007F064 @ 0x18007F064 (sub_18007F064.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800745F0(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_18007F064(a1, v3, **a1);
  return j_j__o_free(*a1);
}
