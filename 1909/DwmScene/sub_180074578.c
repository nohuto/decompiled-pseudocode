/*
 * XREFs of sub_180074578 @ 0x180074578
 * Callers:
 *     sub_18012D936 @ 0x18012D936 (sub_18012D936.c)
 *     sub_18012E19B @ 0x18012E19B (sub_18012E19B.c)
 *     unknown_libname_58 @ 0x18012E24C (unknown_libname_58.c)
 *     sub_18012E57C @ 0x18012E57C (sub_18012E57C.c)
 * Callees:
 *     sub_18007EE60 @ 0x18007EE60 (sub_18007EE60.c)
 */

__int64 __fastcall sub_180074578(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007EE60(a1, v3, **a1);
  return j_j__o_free(*a1);
}
