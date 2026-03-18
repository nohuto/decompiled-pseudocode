/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180186844
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E5DA4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180184BA4 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180186314 (-ensure_extra_capacity@-$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expa.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r9
  __int64 v12; // r11
  bool v13; // sf
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  char v18[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = *a1;
  v17 = 0LL;
  v6 = (__int64 *)a1[1];
  v16 = 1LL;
  v7 = ((__int64)v6 - v5) >> 3;
  v19 = 0LL;
  v8 = v7 - a2;
  v9 = v5 + 8 * v7;
  v15 = v9;
  if ( !v9 )
    goto LABEL_18;
  v19 = 1LL;
  v10 = 1LL;
  if ( v8 <= 1 )
    v10 = v7 - a2;
  v9 = 8 * v10;
  v11 = (__int64 *)((char *)v6 - v9);
  v17 = 1LL;
  if ( v6 != (__int64 *)((char *)v6 - v9) )
  {
    v12 = v15;
    v4 = v17;
    do
    {
      --v6;
      if ( !v12 )
        goto LABEL_18;
      if ( !v4 )
        goto LABEL_18;
      if ( --v4 >= v16 )
        goto LABEL_18;
      v9 = *v6;
      *(_QWORD *)(v12 + 8 * v4) = *v6;
    }
    while ( v6 != v11 );
  }
  if ( v8 > 1 )
  {
    v17 = 0LL;
    v15 = v5;
    v16 = v7;
    v19 = 0LL;
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_18;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_18:
      _o__invalid_parameter_noinfo_noreturn(v9, v4);
      JUMPOUT(0x18018699ELL);
    }
    v19 = v7;
    v17 = v7;
    std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
      (__int64)v18,
      (_QWORD *)(v5 + 8 * a2),
      (_QWORD *)(v5 + 8 * (v7 - 1)),
      &v15);
  }
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
