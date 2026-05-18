/*
 * XREFs of sub_18007FE50 @ 0x18007FE50
 * Callers:
 *     sub_18007FF3C @ 0x18007FF3C (sub_18007FF3C.c)
 * Callees:
 *     sub_180080104 @ 0x180080104 (sub_180080104.c)
 *     sub_180080378 @ 0x180080378 (sub_180080378.c)
 */

__int64 __fastcall sub_18007FE50(
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
  v15 = sub_180080378(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_180080104(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_180080104(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
