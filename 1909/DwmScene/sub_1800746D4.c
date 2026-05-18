/*
 * XREFs of sub_1800746D4 @ 0x1800746D4
 * Callers:
 *     sub_18012D9DD @ 0x18012D9DD (sub_18012D9DD.c)
 *     sub_18012DC2C @ 0x18012DC2C (sub_18012DC2C.c)
 * Callees:
 *     sub_18007EF90 @ 0x18007EF90 (sub_18007EF90.c)
 */

__int64 __fastcall sub_1800746D4(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007EF90(a1, v3, **a1);
  return j_j__o_free(*a1);
}
