/*
 * XREFs of sub_1801218E4 @ 0x1801218E4
 * Callers:
 *     sub_180121BF8 @ 0x180121BF8 (sub_180121BF8.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180121D14 @ 0x180121D14 (sub_180121D14.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801218E4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rcx

  v4 = (__int64 *)(a2 + 16);
  sub_180124524(a2 + 48);
  unknown_libname_116(v4);
  v4[2] = 0LL;
  v4[3] = 0LL;
  try
  {
    sub_18001110C(v4, a3);
    v5 = a3 + 32;
    v6 = v4 + 4;
  }
  catch ( ... )
  {
    sub_180123210(a1, a2);
    sub_180120988(a1, a2);
    throw;
  }
  return sub_180121D14(v6, v5);
}
