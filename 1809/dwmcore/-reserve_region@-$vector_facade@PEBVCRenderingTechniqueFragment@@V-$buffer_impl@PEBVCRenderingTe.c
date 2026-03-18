/*
 * XREFs of ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180068780
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800708B0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18016B3E4 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800688F0 (-ensure_extra_capacity@-$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expa.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r11
  bool v12; // sf
  _QWORD *i; // rax
  _QWORD *v15; // [rsp+20h] [rbp-40h]

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = (__int64 *)a1[1];
  v7 = ((__int64)v6 - *a1) >> 3;
  v8 = v7 - a2;
  v9 = 8 * v7 + *a1;
  v15 = (_QWORD *)v9;
  if ( !v9 )
    goto LABEL_20;
  v10 = v7 - a2;
  if ( v8 > 1 )
    v10 = 1LL;
  v9 = 8 * v10;
  v11 = (__int64 *)((char *)v6 - v9);
  if ( v6 != (__int64 *)((char *)v6 - v9) )
  {
    v4 = 1LL;
    do
    {
      --v6;
      if ( !v15 )
        goto LABEL_20;
      if ( !v4 )
        goto LABEL_20;
      if ( --v4 )
        goto LABEL_20;
      v9 = *v6;
      *v15 = *v6;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    v12 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_20;
      v12 = v7 < 0;
    }
    if ( v12 && v7 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v9, v4, v7, v5);
      JUMPOUT(0x1800688E7LL);
    }
    for ( i = (_QWORD *)(v5 - 8 + 8 * v7); (_QWORD *)(v5 + 8 * a2) != i; i[1] = *i )
      --i;
  }
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
