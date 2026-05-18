/*
 * XREFs of sub_180074738 @ 0x180074738
 * Callers:
 *     unknown_libname_48 @ 0x18012DBA5 (unknown_libname_48.c)
 * Callees:
 *     sub_18007F300 @ 0x18007F300 (sub_18007F300.c)
 */

__int64 __fastcall sub_180074738(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007F300(a1, v3, **a1);
  return j_j__o_free(*a1);
}
