/*
 * XREFs of sub_180106408 @ 0x180106408
 * Callers:
 *     sub_180106644 @ 0x180106644 (sub_180106644.c)
 * Callees:
 *     sub_1801068B8 @ 0x1801068B8 (sub_1801068B8.c)
 *     sub_180106BA8 @ 0x180106BA8 (sub_180106BA8.c)
 */

__int64 __fastcall sub_180106408(
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

  v13 = (void *)sub_180106BA8(a9, a12, a6, a7);
  sub_1801068B8(a1, a12, (__int64)a6, a7);
  return sub_1801068B8(v13, a5 - a12, (__int64)a6, a7);
}
