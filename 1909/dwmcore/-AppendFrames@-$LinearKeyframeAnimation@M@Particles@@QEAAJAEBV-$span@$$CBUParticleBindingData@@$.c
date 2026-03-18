/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@M@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E7F20
 * Callers:
 *     ?OnBindingChanged@CParticleScalarBehavior@@MEAAJAEAV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801ED9E0 (-OnBindingChanged@CParticleScalarBehavior@@MEAAJAEAV-$span@$$CBUParticleBindingData@@$0-0@gsl@@_.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E75EC (--$_Emplace_reallocate@U-$ParticleKeyframe@M@Particles@@@-$vector@U-$ParticleKeyframe@M@Particle.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<float>::AppendFrames(__int64 a1, _QWORD *a2)
{
  int *v2; // rbx
  int *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rdx
  int v6; // xmm0_4
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

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
      HIDWORD(v9) = v2[1];
      LODWORD(v9) = v6;
      v10 = v7;
      if ( v4[2] == v5 )
      {
        std::vector<Particles::ParticleKeyframe<float>>::_Emplace_reallocate<Particles::ParticleKeyframe<float>>(
          v4,
          v5,
          (__int64)&v9);
      }
      else
      {
        *(_QWORD *)v5 = v9;
        *(_DWORD *)(v5 + 8) = v7;
        v4[1] += 12LL;
      }
      v2 += 6;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
