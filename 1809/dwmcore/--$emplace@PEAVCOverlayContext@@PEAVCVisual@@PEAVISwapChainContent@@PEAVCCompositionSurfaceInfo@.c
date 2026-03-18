/*
 * XREFs of ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N99999$$T@Z @ 0x180167ACC
 * Callers:
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x180167C54 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurface.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@_N888881@Z @ 0x1801685B4 (--0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEAVCVisual@@PEAVISwapChainContent@@PEAVCComposi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CD68 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext *,CVisual *,ISwapChainContent *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        CMILCOMBase *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        __int64 a18)
{
  __int64 v19; // rsi
  int v22; // eax
  std::_Ref_count_base *v23; // rcx

  v19 = (__int64)(*a3 - *a1) >> 8;
  v22 = detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v19,
          1LL);
  COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
    v22,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18);
  v23 = *(std::_Ref_count_base **)(a11 + 8);
  *a2 = *a1 + (v19 << 8);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  return a2;
}
