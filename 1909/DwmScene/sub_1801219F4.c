/*
 * XREFs of sub_1801219F4 @ 0x1801219F4
 * Callers:
 *     sub_180121D08 @ 0x180121D08 (sub_180121D08.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180121E24 @ 0x180121E24 (sub_180121E24.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801219F4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rcx

  v4 = (__int64 *)(a2 + 16);
  sub_180124634(a2 + 48);
  unknown_libname_116(v4);
  v4[2] = 0LL;
  v4[3] = 0LL;
  try
  {
    sub_18001115C(v4, a3);
    v5 = a3 + 32;
    v6 = v4 + 4;
  }
  catch ( ... )
  {
    sub_180123320(a1, a2);
    sub_180120A98(a1, a2);
    throw;
  }
  return sub_180121E24(v6, v5);
}
