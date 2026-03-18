/*
 * XREFs of ??$_Emplace_reallocate@AEBU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAU23@AEBU23@@Z @ 0x1801DD084
 * Callers:
 *     ?Convert@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4KeyframeInput@2@AEBV?$span@$$CBUKeyframeData@@$0?0@gsl@@PEAPEAV12@@Z @ 0x1801DDA08 (-Convert@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@SAJW4Keyfram.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801B2218 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3> const &>(
        __int128 **a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int128 *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  _OWORD *v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r10
  __int128 *v16; // rdx
  __int128 *v17; // rcx
  _OWORD *v18; // r8
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  unsigned __int64 v21; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - (char *)*a1;
  v5 = a1[1] - *a1;
  v6 = (__int128 *)a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v5 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (__int64)v13;
  *(_OWORD *)((char *)v13 + v14) = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( v6 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v19 = *v17++;
      *v18++ = v19;
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      do
      {
        v20 = *v17++;
        *v13++ = v20;
      }
      while ( v17 != v6 );
      v16 = a1[1];
    }
    if ( v6 != v16 )
    {
      v21 = v15 + v14 - (_QWORD)v6;
      do
      {
        *(__int128 *)((char *)v6 + v21 + 16) = *v6;
        ++v6;
      }
      while ( v6 != v16 );
    }
  }
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
    (__int64)a1,
    v15,
    v8,
    v11);
  return (unsigned __int64)*a1 + v14;
}
