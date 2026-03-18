/*
 * XREFs of ??0?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DD27C
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD830 (-Convert@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 i; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1] - *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = v4 / 12;
  if ( v4 / 12 )
  {
    if ( v5 > 0x1555555555555555LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v6 = 12 * v5;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(12 * v5);
    *a1 = v7;
    v8 = v7;
    a1[1] = v7;
    a1[2] = v6 + v7;
    v9 = a2[1];
    for ( i = *a2; i != v9; i += 12LL )
    {
      *(_QWORD *)v8 = *(_QWORD *)i;
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(i + 8);
      v8 += 12LL;
    }
    a1[1] = v8;
  }
  return a1;
}
