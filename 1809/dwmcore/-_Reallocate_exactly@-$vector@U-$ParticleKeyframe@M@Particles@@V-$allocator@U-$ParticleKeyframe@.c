/*
 * XREFs of ?_Reallocate_exactly@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@AEAAX_K@Z @ 0x1801DE0C4
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DD660 (-Convert@-$LinearKeyframeAnimation@M@Particles@@SAJW4KeyframeInput@2@AEBV-$span@$$CBUKeyframeDat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Particles::ParticleKeyframe<float>>::_Reallocate_exactly(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // r8
  _QWORD *v8; // rdx
  __int64 *i; // rcx
  __int64 v10; // xmm0_8

  v4 = (a1[1] - *a1) >> 3;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = (__int64 *)a1[1];
  v8 = (_QWORD *)v6;
  for ( i = (__int64 *)*a1; i != v7; ++i )
  {
    v10 = *i;
    *v8++ = v10;
  }
  return std::vector<CVectorShape *>::_Change_array(a1, v6, v4, a2);
}
