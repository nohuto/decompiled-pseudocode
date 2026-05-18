/*
 * XREFs of sub_1800A29C8 @ 0x1800A29C8
 * Callers:
 *     sub_18012F737 @ 0x18012F737 (sub_18012F737.c)
 *     sub_18012F75D @ 0x18012F75D (sub_18012F75D.c)
 * Callees:
 *     sub_1800A5F28 @ 0x1800A5F28 (sub_1800A5F28.c)
 */

__int64 __fastcall sub_1800A29C8(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800A5F28(a1, v3, **a1);
  return j_j__o_free(*a1);
}
