/*
 * XREFs of ?_Tidy@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXXZ @ 0x1801DE280
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830 (-Convert@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 12 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 12LL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
