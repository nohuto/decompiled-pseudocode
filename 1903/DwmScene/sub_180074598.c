/*
 * XREFs of sub_180074598 @ 0x180074598
 * Callers:
 *     sub_18012DE8A @ 0x18012DE8A (sub_18012DE8A.c)
 * Callees:
 *     sub_18007EC1C @ 0x18007EC1C (sub_18007EC1C.c)
 */

__int64 __fastcall sub_180074598(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007EC1C(a1, v3, **a1);
  return j_j__o_free(*a1);
}
