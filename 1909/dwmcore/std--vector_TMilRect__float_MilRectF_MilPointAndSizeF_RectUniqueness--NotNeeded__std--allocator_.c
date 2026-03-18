/*
 * XREFs of std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___ @ 0x18021677C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180035D18 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1800374E0 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat2@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___(
        __int64 *a1,
        unsigned __int64 a2)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  SIZE_T v9; // rcx
  __int64 v10; // rax
  __int128 *v11; // r8
  _OWORD *v12; // rdx
  __int128 *i; // rcx
  __int128 v14; // xmm0
  unsigned __int64 v15; // rbx

  v4 = (const char *)a1[1];
  v5 = (a1[2] - *a1) >> 4;
  result = (__int64)&v4[-*a1] >> 4;
  if ( a2 <= v5 )
  {
    if ( a2 <= result )
    {
      if ( a2 != result )
        a1[1] = *a1 + 16 * a2;
    }
    else
    {
      v15 = a2 - result;
      if ( v15 )
        v4 += 16 * v15;
      a1[1] = (__int64)v4;
    }
  }
  else
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error(v4);
    v7 = v5 >> 1;
    if ( v5 <= 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) )
    {
      v8 = v7 + v5;
      if ( v7 + v5 < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    v9 = 16 * v8;
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      v9 = -1LL;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    v11 = (__int128 *)a1[1];
    v12 = (_OWORD *)v10;
    for ( i = (__int128 *)*a1; i != v11; ++i )
    {
      v14 = *i;
      *v12++ = v14;
    }
    return std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(
             a1,
             v10,
             a2,
             v8);
  }
  return result;
}
