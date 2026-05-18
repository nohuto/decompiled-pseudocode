/*
 * XREFs of sub_180080260 @ 0x180080260
 * Callers:
 *     sub_180081018 @ 0x180081018 (sub_180081018.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     sub_180080538 @ 0x180080538 (sub_180080538.c)
 *     sub_180080A24 @ 0x180080A24 (sub_180080A24.c)
 *     sub_1800810F8 @ 0x1800810F8 (sub_1800810F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180080260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rbp

  v7 = a2;
  v8 = a1;
  result = sub_180080A24(a1, a2, a3, a5);
  if ( a3 > 32 )
  {
    sub_1800810F8(v8, v7, a4, 32, a3, a5);
    v10 = a4 + 16 * a3;
    result = sub_180080538(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_180080538(v8, v7, a4, i, a3, a5);
      v12 = 2 * i;
      result = sub_180080538(a4, (int)a4 + 16 * (int)a3, v8, v12, a3, a5);
    }
    while ( a4 != v10 )
    {
      result = unknown_libname_115(a4, 0);
      a4 += 16LL;
    }
  }
  return result;
}
