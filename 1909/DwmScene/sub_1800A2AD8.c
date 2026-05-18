/*
 * XREFs of sub_1800A2AD8 @ 0x1800A2AD8
 * Callers:
 *     sub_18012F847 @ 0x18012F847 (sub_18012F847.c)
 *     sub_18012F86D @ 0x18012F86D (sub_18012F86D.c)
 * Callees:
 *     sub_1800A6038 @ 0x1800A6038 (sub_1800A6038.c)
 */

__int64 __fastcall sub_1800A2AD8(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800A6038(a1, v3, **a1);
  return j_j__o_free(*a1);
}
