/*
 * XREFs of sub_180028148 @ 0x180028148
 * Callers:
 *     sub_180128966 @ 0x180128966 (sub_180128966.c)
 * Callees:
 *     sub_18002BDB0 @ 0x18002BDB0 (sub_18002BDB0.c)
 */

__int64 __fastcall sub_180028148(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002BDB0(a1, v3, **a1);
  return j_j__o_free(*a1);
}
