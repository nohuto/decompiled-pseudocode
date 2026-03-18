/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E78C8
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E805C (-AppendFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801E8C5C (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  SIZE_T v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v22; // eax

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 20;
  if ( v7 / 20 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 20 + 1;
  v10 = (a1[2] - *a1) / 20;
  v11 = v10 >> 1;
  if ( v10 <= 0xCCCCCCCCCCCCCCCLL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 20 * v12;
  if ( v12 > 0xCCCCCCCCCCCCCCCLL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = 20 * v8;
  v16 = v14;
  *(_OWORD *)(v15 + v14) = *(_OWORD *)a3;
  *(_DWORD *)(v15 + v14 + 16) = *(_DWORD *)(a3 + 16);
  v17 = a1[1];
  v18 = *a1;
  if ( v3 == v17 )
  {
    while ( v18 != v17 )
    {
      *(_OWORD *)v16 = *(_OWORD *)v18;
      v22 = *(_DWORD *)(v18 + 16);
      v18 += 20LL;
      *(_DWORD *)(v16 + 16) = v22;
      v16 += 20LL;
    }
  }
  else
  {
    if ( v18 != v3 )
    {
      do
      {
        *(_OWORD *)v16 = *(_OWORD *)v18;
        v19 = *(_DWORD *)(v18 + 16);
        v18 += 20LL;
        *(_DWORD *)(v16 + 16) = v19;
        v16 += 20LL;
      }
      while ( v18 != v3 );
      v17 = a1[1];
    }
    if ( v3 != v17 )
    {
      v20 = v14 + v15 - v3;
      do
      {
        *(_OWORD *)(v20 + v3 + 20) = *(_OWORD *)v3;
        *(_DWORD *)(v20 + v3 + 36) = *(_DWORD *)(v3 + 16);
        v3 += 20LL;
      }
      while ( v3 != v17 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(a1, v14, v9, v12);
  return v15 + *a1;
}
