/*
 * XREFs of std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___ @ 0x1801B211C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BC560 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V?$allocator@U?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@@std@@@std@@AEAAXQEAU?$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@_K1@Z @ 0x1801B2218 (-_Change_array@-$vector@U-$ParticleKeyframe@Ufloat3@Numerics@Foundation@Windows@@@Particles@@V-$.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___(
        __int128 **a1,
        unsigned __int64 a2)
{
  __int128 *v4; // rcx
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
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1[1];
  v5 = a1[2] - *a1;
  result = v4 - *a1;
  if ( a2 <= v5 )
  {
    if ( a2 <= result )
    {
      if ( a2 != result )
        a1[1] = &(*a1)[a2];
    }
    else
    {
      v15 = a2 - result;
      if ( v15 )
        v4 += v15;
      a1[1] = v4;
    }
  }
  else
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
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
    v11 = a1[1];
    v12 = (_OWORD *)v10;
    for ( i = *a1; i != v11; ++i )
    {
      v14 = *i;
      *v12++ = v14;
    }
    return std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float3>>::_Change_array(
             a1,
             v10,
             a2,
             v8);
  }
  return result;
}
