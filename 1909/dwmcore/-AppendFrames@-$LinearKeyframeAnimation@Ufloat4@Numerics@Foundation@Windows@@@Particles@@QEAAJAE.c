/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E80F0
 * Callers:
 *     ?OnBindingChanged@CParticleVector4Behavior@@MEAAJAEAV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801EDA20 (-OnBindingChanged@CParticleVector4Behavior@@MEAAJAEAV-$span@$$CBUParticleBindingData@@$0-0@gsl@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E7A64 (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat4@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::AppendFrames(
        __int64 a1,
        _QWORD *a2)
{
  int *v2; // rbx
  int *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rdx
  int v6; // xmm0_4
  int v7; // eax
  __int64 v8; // xmm1_8
  _BYTE v10[24]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (int *)a2[1];
  v3 = &v2[6 * *a2];
  if ( v2 != v3 )
  {
    v4 = (__int64 *)(a1 + 8);
    do
    {
      v5 = v4[1];
      v6 = *v2;
      v7 = v2[5];
      *(_OWORD *)&v10[4] = *(_OWORD *)(v2 + 1);
      *(_DWORD *)&v10[20] = v7;
      *(_DWORD *)v10 = v6;
      if ( v4[2] == v5 )
      {
        std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>(
          v4,
          v5,
          (__int64)v10);
      }
      else
      {
        v8 = *(_QWORD *)&v10[16];
        *(_OWORD *)v5 = *(_OWORD *)v10;
        *(_QWORD *)(v5 + 16) = v8;
        v4[1] += 24LL;
      }
      v2 += 6;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
