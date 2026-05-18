/*
 * XREFs of sub_180074700 @ 0x180074700
 * Callers:
 *     sub_18012DAAE @ 0x18012DAAE (sub_18012DAAE.c)
 *     sub_18012DCFD @ 0x18012DCFD (sub_18012DCFD.c)
 * Callees:
 *     sub_18007F174 @ 0x18007F174 (sub_18007F174.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180074700(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_18007F174(a1, v3, **a1);
  return j_j__o_free(*a1);
}
