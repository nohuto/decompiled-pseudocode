/*
 * XREFs of sub_1800ABD94 @ 0x1800ABD94
 * Callers:
 *     sub_18012FDBF @ 0x18012FDBF (sub_18012FDBF.c)
 * Callees:
 *     sub_1800B2C74 @ 0x1800B2C74 (sub_1800B2C74.c)
 */

__int64 __fastcall sub_1800ABD94(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800B2C74(a1, v3, **a1);
  return j_j__o_free(*a1);
}
