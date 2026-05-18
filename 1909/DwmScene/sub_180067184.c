/*
 * XREFs of sub_180067184 @ 0x180067184
 * Callers:
 *     sub_18012CF59 @ 0x18012CF59 (sub_18012CF59.c)
 *     sub_18012D92A @ 0x18012D92A (sub_18012D92A.c)
 *     sub_18012E1A7 @ 0x18012E1A7 (sub_18012E1A7.c)
 *     sub_18012E240 @ 0x18012E240 (sub_18012E240.c)
 *     sub_18012F7DB @ 0x18012F7DB (sub_18012F7DB.c)
 *     sub_18012F7FB @ 0x18012F7FB (sub_18012F7FB.c)
 *     sub_18012FB75 @ 0x18012FB75 (sub_18012FB75.c)
 * Callees:
 *     sub_180069DD0 @ 0x180069DD0 (sub_180069DD0.c)
 */

__int64 __fastcall sub_180067184(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180069DD0(a1, v3, **a1);
  return j_j__o_free(*a1);
}
