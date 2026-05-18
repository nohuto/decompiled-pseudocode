/*
 * XREFs of sub_180074628 @ 0x180074628
 * Callers:
 *     unknown_libname_48 @ 0x18012DA95 (unknown_libname_48.c)
 * Callees:
 *     sub_18007F1F0 @ 0x18007F1F0 (sub_18007F1F0.c)
 */

__int64 __fastcall sub_180074628(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007F1F0(a1, v3, **a1);
  return j_j__o_free(*a1);
}
