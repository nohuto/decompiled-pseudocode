/*
 * XREFs of sub_180106430 @ 0x180106430
 * Callers:
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     sub_1801068A8 @ 0x1801068A8 (sub_1801068A8.c)
 *     sub_180106CB8 @ 0x180106CB8 (sub_180106CB8.c)
 */

__int64 __fastcall sub_180106430(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  void *v13; // rdi

  v13 = (void *)sub_180106CB8(a9, a12, a6, a7);
  sub_1801068A8(a1, a12, (__int64)a6, a7);
  return sub_1801068A8(v13, a5 - a12, (__int64)a6, a7);
}
