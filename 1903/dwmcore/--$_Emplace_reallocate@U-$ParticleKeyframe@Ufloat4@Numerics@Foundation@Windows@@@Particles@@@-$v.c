/*
 * XREFs of ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E91D4
 * Callers:
 *     ?AppendFrames@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E9860 (-AppendFrames@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXQEAUComputeScribbleLatencyData@@_K1@Z @ 0x1801B64C0 (-_Change_array@-$vector@UComputeScribbleLatencyData@@V-$allocator@UComputeScribbleLatencyData@@@.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>(
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
  _OWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  __int64 v22; // xmm1_8

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 24;
  if ( v7 / 24 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 24 + 1;
  v10 = (a1[2] - *a1) / 24;
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 24 * v12;
  if ( v12 > 0xAAAAAAAAAAAAAAALL )
    v13 = -1LL;
  v14 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = (__int64)v14;
  v16 = 24 * v8;
  *(_OWORD *)((char *)v14 + v16) = *(_OWORD *)a3;
  *(_QWORD *)((char *)v14 + v16 + 16) = *(_QWORD *)(a3 + 16);
  v17 = a1[1];
  v18 = *a1;
  if ( v3 == v17 )
  {
    while ( v18 != v17 )
    {
      *v14 = *(_OWORD *)v18;
      v14 = (_OWORD *)((char *)v14 + 24);
      v22 = *(_QWORD *)(v18 + 16);
      v18 += 24LL;
      *((_QWORD *)v14 - 1) = v22;
    }
  }
  else
  {
    if ( v18 != v3 )
    {
      do
      {
        *v14 = *(_OWORD *)v18;
        v14 = (_OWORD *)((char *)v14 + 24);
        v19 = *(_QWORD *)(v18 + 16);
        v18 += 24LL;
        *((_QWORD *)v14 - 1) = v19;
      }
      while ( v18 != v3 );
      v17 = a1[1];
    }
    if ( v3 != v17 )
    {
      v20 = v15 + v16 - v3;
      do
      {
        *(_OWORD *)(v20 + v3 + 24) = *(_OWORD *)v3;
        *(_QWORD *)(v20 + v3 + 40) = *(_QWORD *)(v3 + 16);
        v3 += 24LL;
      }
      while ( v3 != v17 );
    }
  }
  std::vector<ComputeScribbleLatencyData>::_Change_array((__int64)a1, v15, v9, v12);
  return v16 + *a1;
}
