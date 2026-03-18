/*
 * XREFs of std::vector_Windows::Foundation::Numerics::float2_std::allocator_Windows::Foundation::Numerics::float2___::_Resize__lambda_2ff4ffb0ae9e0c6fc701fcd0ab995068___ @ 0x1801C4368
 * Callers:
 *     ?OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z @ 0x1801C6648 (-OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800061B4 (-_Calculate_growth@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@F.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001B608 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector_Windows::Foundation::Numerics::float2_std::allocator_Windows::Foundation::Numerics::float2___::_Resize__lambda_2ff4ffb0ae9e0c6fc701fcd0ab995068___(
        __int64 *a1,
        unsigned __int64 a2)
{
  char *v2; // r14
  _BYTE *v4; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbp
  SIZE_T v9; // rcx
  unsigned __int64 v10; // r9
  char *v11; // r14
  unsigned __int64 v12; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)a1[1];
  v4 = (_BYTE *)*a1;
  v6 = (v2 - v4) >> 3;
  result = (a1[2] - (__int64)v4) >> 3;
  if ( a2 <= result )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
      {
        result = (unsigned __int64)&v4[8 * a2];
        a1[1] = result;
      }
    }
    else
    {
      v12 = a2 - v6;
      if ( a2 != v6 )
      {
        result = (unsigned __int64)memset_0(v2, 0, 8 * v12);
        v2 += 8 * v12;
      }
      a1[1] = (__int64)v2;
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v8 = std::vector<Windows::Foundation::Numerics::float2>::_Calculate_growth(a1, a2);
    v9 = 8 * v8;
    if ( v8 > v10 )
      v9 = -1LL;
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    if ( a2 != v6 )
      memset_0(&v11[8 * v6], 0, 8 * (a2 - v6));
    memmove_0(v11, (const void *)*a1, a1[1] - *a1);
    return std::vector<CVectorShape *>::_Change_array(a1, (__int64)v11, a2, v8);
  }
  return result;
}
