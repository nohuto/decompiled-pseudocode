/*
 * XREFs of sub_18007FF60 @ 0x18007FF60
 * Callers:
 *     sub_18008004C @ 0x18008004C (sub_18008004C.c)
 * Callees:
 *     sub_180080214 @ 0x180080214 (sub_180080214.c)
 *     sub_180080488 @ 0x180080488 (sub_180080488.c)
 */

__int64 __fastcall sub_18007FF60(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = sub_180080488(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_180080214(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_180080214(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
