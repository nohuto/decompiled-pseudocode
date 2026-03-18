/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E97CC
 * Callers:
 *     ?OnBindingChanged@CParticleColorBehavior@@MEAAJAEAV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801EA460 (-OnBindingChanged@CParticleColorBehavior@@MEAAJAEAV-$span@$$CBUParticleBindingData@@$0-0@gsl@@_N.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E9038 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::AppendFrames(
        __int64 a1,
        _QWORD *a2)
{
  int *v2; // rbx
  int *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // xmm1_8
  int v7; // xmm0_4
  int v8; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  v2 = (int *)a2[1];
  v3 = &v2[6 * *a2];
  if ( v2 != v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    do
    {
      v5 = v4[1];
      v6 = *(_QWORD *)(v2 + 1);
      v7 = *v2;
      HIDWORD(v10) = v2[3];
      v8 = v2[5];
      v11 = v8;
      LODWORD(v10) = v7;
      *(_QWORD *)((char *)&v10 + 4) = v6;
      if ( v4[2] == v5 )
      {
        std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
          v4,
          v5,
          (__int64)&v10);
      }
      else
      {
        *(_OWORD *)v5 = v10;
        *(_DWORD *)(v5 + 16) = v8;
        v4[1] += 20LL;
      }
      v2 += 6;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
