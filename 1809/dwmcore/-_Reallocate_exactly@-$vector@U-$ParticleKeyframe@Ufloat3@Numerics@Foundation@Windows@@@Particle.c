/*
 * XREFs of ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE1F8
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DDA08 (-Convert@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Reallocate_exactly(
        __int128 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rcx
  __int64 v6; // rax
  __int128 *v7; // r8
  _OWORD *v8; // rdx
  __int128 *i; // rcx
  __int128 v10; // xmm0

  v4 = a1[1] - *a1;
  v5 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = a1[1];
  v8 = (_OWORD *)v6;
  for ( i = *a1; i != v7; ++i )
  {
    v10 = *i;
    *v8++ = v10;
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
    (__int64)a1,
    v6,
    v4,
    a2);
}
