/*
 * XREFs of sub_1800D0B10 @ 0x1800D0B10
 * Callers:
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 *     sub_180031944 @ 0x180031944 (sub_180031944.c)
 * Callees:
 *     unknown_libname_113 @ 0x18000F6D4 (unknown_libname_113.c)
 */

__int64 *__fastcall sub_1800D0B10(__int64 *a1, int a2)
{
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  unknown_libname_113(a1, off_18025CBE0[a2]);
  return a1;
}
