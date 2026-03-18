/*
 * XREFs of ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180186B14
 * Callers:
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x1800E552C (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180181018 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N99999$$T@Z @ 0x180181088 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801811B4 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 * Callees:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800E5508 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801817DC (--$move_backward@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180181A9C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180186564 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
        COverlayContext::OverlayPlaneInfo **a1,
        __int64 a2,
        signed __int64 a3)
{
  __int64 v6; // rcx
  COverlayContext::OverlayPlaneInfo *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r10
  COverlayContext::OverlayPlaneInfo *v10; // r12
  unsigned __int64 v11; // r15
  bool v12; // sf
  signed __int64 v13; // rax
  signed __int64 v14; // r11
  unsigned __int64 v15; // r11
  __int64 v16; // r9
  bool v17; // sf
  COverlayContext::OverlayPlaneInfo *v18; // rdx
  COverlayContext::OverlayPlaneInfo *v19; // rbx
  COverlayContext::OverlayPlaneInfo *v21; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]
  signed __int64 v23; // [rsp+30h] [rbp-30h]
  char v24[16]; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v25; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (__int64)a1,
    a3);
  v7 = *a1;
  v23 = 0LL;
  v8 = (__int64)a1[1];
  v22 = a3;
  v9 = (v8 - (__int64)v7) >> 8;
  v25 = 0LL;
  v10 = (COverlayContext::OverlayPlaneInfo *)((char *)v7 + 256 * v9);
  v11 = v9 - a2;
  v21 = v10;
  v12 = a3 < 0;
  if ( a3 )
  {
    if ( !v10 )
      goto LABEL_20;
    v12 = a3 < 0;
  }
  if ( v12 && a3 )
    goto LABEL_20;
  v25 = a3;
  v13 = a3;
  if ( a3 >= v11 )
    v13 = v9 - a2;
  v23 = a3;
  if ( v8 != v8 - (v13 << 8) )
  {
    v14 = v23;
    do
    {
      v8 -= 256LL;
      if ( !v21 )
        goto LABEL_20;
      if ( !v14 )
        goto LABEL_20;
      v15 = v14 - 1;
      if ( v15 >= v22 )
        goto LABEL_20;
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((__int64)v21 + 256 * v15, v8);
    }
    while ( v8 != v16 );
  }
  if ( v11 > a3 )
  {
    v23 = 0LL;
    v21 = v7;
    v22 = v9;
    v25 = 0LL;
    v17 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_20;
      v17 = v9 < 0;
    }
    if ( v17 && v9 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v6, v8);
      __debugbreak();
    }
    v25 = v9;
    v23 = v9;
    std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
      (__int64)v24,
      (__int64)v7 + 256 * a2,
      (__int64)v7 + 256 * (v9 - a3),
      &v21);
  }
  v18 = (COverlayContext::OverlayPlaneInfo *)((char *)v7 + 256 * (a2 + a3));
  if ( v10 < v18 )
    v18 = v10;
  v19 = (COverlayContext::OverlayPlaneInfo *)((char *)v7 + 256 * a2);
  detail::destruct_range<COverlayContext::OverlayPlaneInfo>(v19, v18);
  a1[1] = (COverlayContext::OverlayPlaneInfo *)((char *)a1[1] + 256 * a3);
  return v19;
}
