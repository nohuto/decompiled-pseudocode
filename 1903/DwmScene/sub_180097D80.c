/*
 * XREFs of sub_180097D80 @ 0x180097D80
 * Callers:
 *     sub_1800983BC @ 0x1800983BC (sub_1800983BC.c)
 *     sub_18009BC10 @ 0x18009BC10 (sub_18009BC10.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180097F08 @ 0x180097F08 (sub_180097F08.c)
 *     sub_180098240 @ 0x180098240 (sub_180098240.c)
 *     sub_180098560 @ 0x180098560 (sub_180098560.c)
 *     sub_18009BE78 @ 0x18009BE78 (sub_18009BE78.c)
 *     sub_18009C02C @ 0x18009C02C (sub_18009C02C.c)
 */

unsigned __int64 __fastcall sub_180097D80(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 i; // rdi

  v6 = a1[1];
  v7 = (v6 - *a1) / 88;
  v8 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v8 * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 63;
  v10 = v8 / 88;
  if ( a2 <= v8 / 88 )
  {
    if ( a2 <= v7 )
    {
      if ( a2 != v7 )
      {
        v17 = *a1 + 88 * a2;
        for ( i = v17; i != v6; i += 88LL )
          result = sub_180098560(i);
        a1[1] = v17;
      }
    }
    else
    {
      result = sub_180097F08(v6, a2 - v7, a3, 0LL, a1);
      a1[1] = result;
    }
  }
  else
  {
    if ( a2 > 0x2E8BA2E8BA2E8BALL )
      std::vector<void *>::_Xlen();
    v11 = v10 >> 1;
    if ( v10 <= 0x2E8BA2E8BA2E8BALL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < a2 )
        v12 = a2;
    }
    else
    {
      v12 = a2;
    }
    v13 = sub_18009C02C(a1, v12, 0x2E8BA2E8BA2E8BA3LL);
    sub_180097F08(v13 + 88 * v7, a2 - v7, a3, 0LL, a1);
    v14 = a1[1];
    v15 = *a1;
    if ( *a1 != v14 )
    {
      v16 = v13 - v15;
      do
      {
        sub_180098240(v16 + v15, v15);
        v15 += 88LL;
      }
      while ( v15 != v14 );
    }
    return sub_18009BE78(a1, v13, a2, v12);
  }
  return result;
}
