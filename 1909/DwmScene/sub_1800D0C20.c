/*
 * XREFs of sub_1800D0C20 @ 0x1800D0C20
 * Callers:
 *     sub_18002EC20 @ 0x18002EC20 (sub_18002EC20.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 * Callees:
 *     unknown_libname_113 @ 0x18000F724 (unknown_libname_113.c)
 */

__int64 *__fastcall sub_1800D0C20(__int64 *a1, int a2)
{
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  unknown_libname_113(a1, off_18025DBE0[a2]);
  return a1;
}
