/*
 * XREFs of ??0?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DD350
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DDA08 (-Convert@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  SIZE_T v5; // rdi
  _OWORD *v6; // rax
  _OWORD *v7; // rdx
  _OWORD *i; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(a2[1] - *a2) >> 4;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = v4;
    v6 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5 * 16);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[v5];
    v7 = (_OWORD *)a2[1];
    for ( i = (_OWORD *)*a2; i != v7; ++i )
      *v6++ = *i;
    a1[1] = v6;
  }
  return a1;
}
