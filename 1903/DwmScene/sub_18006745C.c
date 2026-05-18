/*
 * XREFs of sub_18006745C @ 0x18006745C
 * Callers:
 *     sub_18012CE31 @ 0x18012CE31 (sub_18012CE31.c)
 *     unknown_libname_47 @ 0x18012CE3D (unknown_libname_47.c)
 *     sub_180130C4A @ 0x180130C4A (sub_180130C4A.c)
 *     sub_180130C56 @ 0x180130C56 (sub_180130C56.c)
 * Callees:
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 */

__int64 __fastcall sub_18006745C(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)(a1 + 136);
  sub_180069DF4(a1 + 136, v3, **(_QWORD **)(a1 + 136));
  return j_j__o_free(*v1);
}
