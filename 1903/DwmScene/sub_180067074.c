/*
 * XREFs of sub_180067074 @ 0x180067074
 * Callers:
 *     sub_18012CE49 @ 0x18012CE49 (sub_18012CE49.c)
 *     sub_18012D81A @ 0x18012D81A (sub_18012D81A.c)
 *     sub_18012E097 @ 0x18012E097 (sub_18012E097.c)
 *     sub_18012E130 @ 0x18012E130 (sub_18012E130.c)
 *     sub_18012F6CB @ 0x18012F6CB (sub_18012F6CB.c)
 *     sub_18012F6EB @ 0x18012F6EB (sub_18012F6EB.c)
 *     sub_18012FA65 @ 0x18012FA65 (sub_18012FA65.c)
 * Callees:
 *     sub_180069CC0 @ 0x180069CC0 (sub_180069CC0.c)
 */

__int64 __fastcall sub_180067074(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180069CC0(a1, v3, **a1);
  return j_j__o_free(*a1);
}
