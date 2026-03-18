/*
 * XREFs of ?AppendFrames@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAAJAEBV?$span@$$CBUParticleBindingData@@$0?0@gsl@@@Z @ 0x1801E7FB8
 * Callers:
 *     ?OnBindingChanged@CParticleVector2Behavior@@MEAAJAEAV?$span@$$CBUParticleBindingData@@$0?0@gsl@@_N@Z @ 0x1801EDA00 (-OnBindingChanged@CParticleVector2Behavior@@MEAAJAEAV-$span@$$CBUParticleBindingData@@$0-0@gsl@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801E778C (--$_Emplace_reallocate@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@-$v.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AppendFrames(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int128 *v5; // rdx
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]

  v2 = a2[1];
  v3 = v2 + 24LL * *a2;
  if ( v2 != v3 )
  {
    v4 = a1 + 8;
    do
    {
      v5 = *(__int128 **)(v4 + 8);
      v6 = *(_DWORD *)(v2 + 20);
      v9 = *(_QWORD *)(v2 + 4);
      LODWORD(v8) = *(_DWORD *)v2;
      *(_QWORD *)((char *)&v8 + 4) = v9;
      HIDWORD(v8) = v6;
      if ( *(__int128 **)(v4 + 16) == v5 )
      {
        std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
          v4,
          v5,
          &v8);
      }
      else
      {
        *v5 = v8;
        *(_QWORD *)(v4 + 8) += 16LL;
      }
      v2 += 24LL;
    }
    while ( v2 != v3 );
  }
  return 0LL;
}
