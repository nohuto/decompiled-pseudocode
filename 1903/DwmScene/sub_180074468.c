/*
 * XREFs of sub_180074468 @ 0x180074468
 * Callers:
 *     sub_18012D826 @ 0x18012D826 (sub_18012D826.c)
 *     sub_18012E08B @ 0x18012E08B (sub_18012E08B.c)
 *     unknown_libname_58 @ 0x18012E13C (unknown_libname_58.c)
 *     sub_18012E46C @ 0x18012E46C (sub_18012E46C.c)
 * Callees:
 *     sub_18007ED50 @ 0x18007ED50 (sub_18007ED50.c)
 */

__int64 __fastcall sub_180074468(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007ED50(a1, v3, **a1);
  return j_j__o_free(*a1);
}
