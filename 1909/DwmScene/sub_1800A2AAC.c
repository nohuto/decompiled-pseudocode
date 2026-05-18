/*
 * XREFs of sub_1800A2AAC @ 0x1800A2AAC
 * Callers:
 *     sub_18012F85A @ 0x18012F85A (sub_18012F85A.c)
 * Callees:
 *     sub_1800A5F08 @ 0x1800A5F08 (sub_1800A5F08.c)
 */

__int64 __fastcall sub_1800A2AAC(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800A5F08(a1, v3, **a1);
  return j_j__o_free(*a1);
}
