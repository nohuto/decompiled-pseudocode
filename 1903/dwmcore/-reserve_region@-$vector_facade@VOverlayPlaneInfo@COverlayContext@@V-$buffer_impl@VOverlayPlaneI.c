/*
 * XREFs of ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801881F4
 * Callers:
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x1800E467C (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180182718 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N99999$$T@Z @ 0x180182788 (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801828B4 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 * Callees:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x1800E4658 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ??$move_backward@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182EDC (--$move_backward@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18018319C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180187C44 (-ensure_extra_capacity@-$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansi.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
        COverlayContext::OverlayPlaneInfo **a1,
        __int64 a2,
        signed __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  COverlayContext::OverlayPlaneInfo *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r10
  COverlayContext::OverlayPlaneInfo *v12; // r12
  unsigned __int64 v13; // r15
  bool v14; // sf
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // r11
  unsigned __int64 v18; // r11
  bool v19; // sf
  COverlayContext::OverlayPlaneInfo *v20; // rdx
  COverlayContext::OverlayPlaneInfo *v21; // rbx
  COverlayContext::OverlayPlaneInfo *v23; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]
  signed __int64 v25; // [rsp+30h] [rbp-30h]
  char v26[16]; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v27; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (__int64)a1,
    a3);
  v9 = *a1;
  v25 = 0LL;
  v10 = (__int64)a1[1];
  v24 = a3;
  v11 = (v10 - (__int64)v9) >> 8;
  v27 = 0LL;
  v12 = (COverlayContext::OverlayPlaneInfo *)((char *)v9 + 256 * v11);
  v13 = v11 - a2;
  v23 = v12;
  v14 = a3 < 0;
  if ( a3 )
  {
    if ( !v12 )
      goto LABEL_20;
    v14 = a3 < 0;
  }
  if ( v14 && a3 )
    goto LABEL_20;
  v27 = a3;
  v15 = a3;
  if ( a3 >= v13 )
    v15 = v11 - a2;
  v16 = v15 << 8;
  v8 = v10 - v16;
  v25 = a3;
  if ( v10 != v10 - v16 )
  {
    v17 = v25;
    do
    {
      v10 -= 256LL;
      if ( !v23 )
        goto LABEL_20;
      if ( !v17 )
        goto LABEL_20;
      v18 = v17 - 1;
      if ( v18 >= v24 )
        goto LABEL_20;
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((__int64)v23 + 256 * v18, v10);
    }
    while ( v10 != v8 );
  }
  if ( v13 > a3 )
  {
    v25 = 0LL;
    v23 = v9;
    v24 = v11;
    v27 = 0LL;
    v19 = v11 < 0;
    if ( v11 )
    {
      if ( !v9 )
        goto LABEL_20;
      v19 = v11 < 0;
    }
    if ( v19 && v11 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v6, v10, v7, v8);
      __debugbreak();
    }
    v27 = v11;
    v25 = v11;
    std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
      (__int64)v26,
      (__int64)v9 + 256 * a2,
      (__int64)v9 + 256 * (v11 - a3),
      &v23);
  }
  v20 = (COverlayContext::OverlayPlaneInfo *)((char *)v9 + 256 * (a2 + a3));
  if ( v12 < v20 )
    v20 = v12;
  v21 = (COverlayContext::OverlayPlaneInfo *)((char *)v9 + 256 * a2);
  detail::destruct_range<COverlayContext::OverlayPlaneInfo>(v21, v20);
  a1[1] = (COverlayContext::OverlayPlaneInfo *)((char *)a1[1] + 256 * a3);
  return v21;
}
