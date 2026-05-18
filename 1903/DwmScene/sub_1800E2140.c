/*
 * XREFs of sub_1800E2140 @ 0x1800E2140
 * Callers:
 *     sub_1800E21E8 @ 0x1800E21E8 (sub_1800E21E8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800E2ADC @ 0x1800E2ADC (sub_1800E2ADC.c)
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800E2140(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi

  v2 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_1800E2ADC(a1, a2);
    *a1 = v4;
    a1[1] = v4;
    a1[2] = *a1 + (v2 << 7);
    v5 = *a1;
    while ( v2 )
    {
      try
      {
        sub_18010B78C(v5);
        v5 += 128LL;
        --v2;
      }
      catch ( ... )
      {
        sub_1800E2A4C(a1);
        throw;
      }
    }
    a1[1] = v5;
  }
  return a1;
}
