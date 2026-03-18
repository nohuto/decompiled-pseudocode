/*
 * XREFs of ?reserve@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAX_K@Z @ 0x1801DE2DC
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830 (-Convert@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE14C (-_Reallocate_exactly@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particle.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::reserve(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( a2 > v2 / 12 )
  {
    if ( a2 > 0x1555555555555555LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    return std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
