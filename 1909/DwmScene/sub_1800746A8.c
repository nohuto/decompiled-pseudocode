/*
 * XREFs of sub_1800746A8 @ 0x1800746A8
 * Callers:
 *     sub_18012DF9A @ 0x18012DF9A (sub_18012DF9A.c)
 * Callees:
 *     sub_18007ED2C @ 0x18007ED2C (sub_18007ED2C.c)
 */

__int64 __fastcall sub_1800746A8(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007ED2C(a1, v3, **a1);
  return j_j__o_free(*a1);
}
