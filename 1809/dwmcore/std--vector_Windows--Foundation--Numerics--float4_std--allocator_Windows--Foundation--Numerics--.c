/*
 * XREFs of std::vector_Windows::Foundation::Numerics::float4_std::allocator_Windows::Foundation::Numerics::float4___::_Resize__lambda_0c2713a16b6fe99d6b55b0d81ace1f5d___ @ 0x1801C4110
 * Callers:
 *     ?OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z @ 0x1801C6648 (-OneTimeSetupFromTemplate@CParticleEmitter@@IEAAXPEAVCDrawListPrimitive@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801B2218 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ?_Calculate_growth@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1801C7C7C (-_Calculate_growth@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@F.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector_Windows::Foundation::Numerics::float4_std::allocator_Windows::Foundation::Numerics::float4___::_Resize__lambda_0c2713a16b6fe99d6b55b0d81ace1f5d___(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  SIZE_T v7; // rcx
  unsigned __int64 v8; // r9
  char *v9; // rbp
  unsigned __int64 v10; // r8
  char *v11; // rdi
  unsigned __int64 v12; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v5 = (v2 - *(_QWORD *)a1) >> 4;
  if ( a2 <= (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4 )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
        *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 16 * a2;
    }
    else
    {
      v12 = a2 - v5;
      if ( a2 != v5 )
      {
        memset_0(*(void **)(a1 + 8), 0, 16 * v12);
        v2 += 16 * v12;
      }
      *(_QWORD *)(a1 + 8) = v2;
    }
  }
  else
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v6 = std::vector<Windows::Foundation::Numerics::float4>::_Calculate_growth(a1, a2);
    v7 = 16 * v6;
    if ( v6 > v8 )
      v7 = -1LL;
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    v10 = a2 - v5;
    v11 = &v9[16 * v5];
    if ( v10 )
      memset_0(v11, 0, 16 * v10);
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
      a1,
      (__int64)v9,
      a2,
      v6);
  }
}
