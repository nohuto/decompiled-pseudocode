/*
 * XREFs of sub_180080370 @ 0x180080370
 * Callers:
 *     sub_180081128 @ 0x180081128 (sub_180081128.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     sub_180080648 @ 0x180080648 (sub_180080648.c)
 *     sub_180080B34 @ 0x180080B34 (sub_180080B34.c)
 *     sub_180081208 @ 0x180081208 (sub_180081208.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180080370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r12d
  int v8; // r14d
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 i; // rbp
  __int64 v12; // rbp

  v7 = a2;
  v8 = a1;
  result = sub_180080B34(a1, a2, a3, a5);
  if ( a3 > 32 )
  {
    sub_180081208(v8, v7, a4, 32, a3, a5);
    v10 = a4 + 16 * a3;
    result = sub_180080648(a4, (int)a4 + 16 * (int)a3, v8, 64, a3, a5);
    for ( i = 128LL; a3 > i; i = 2 * v12 )
    {
      sub_180080648(v8, v7, a4, i, a3, a5);
      v12 = 2 * i;
      result = sub_180080648(a4, (int)a4 + 16 * (int)a3, v8, v12, a3, a5);
    }
    while ( a4 != v10 )
    {
      result = unknown_libname_115(a4, 0);
      a4 += 16LL;
    }
  }
  return result;
}
