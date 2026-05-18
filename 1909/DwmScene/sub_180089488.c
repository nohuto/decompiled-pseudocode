/*
 * XREFs of sub_180089488 @ 0x180089488
 * Callers:
 *     sub_18012E886 @ 0x18012E886 (sub_18012E886.c)
 * Callees:
 *     sub_18008DC74 @ 0x18008DC74 (sub_18008DC74.c)
 */

__int64 __fastcall sub_180089488(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18008DC74(a1, v3, **a1);
  return j_j__o_free(*a1);
}
