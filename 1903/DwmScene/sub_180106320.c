/*
 * XREFs of sub_180106320 @ 0x180106320
 * Callers:
 *     sub_1801064F0 @ 0x1801064F0 (sub_1801064F0.c)
 * Callees:
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_180106BA8 @ 0x180106BA8 (sub_180106BA8.c)
 */

__int64 __fastcall sub_180106320(
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
  sub_180106798(a1, a12, (__int64)a6, a7);
  return sub_180106798(v13, a5 - a12, (__int64)a6, a7);
}
