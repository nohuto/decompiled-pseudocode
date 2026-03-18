/*
 * XREFs of ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N88888$$T@Z @ 0x180167C54
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N99999$$T@Z @ 0x180167ACC (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016C870 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,ISwapChainContent *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        CMILCOMBase *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rcx
  _QWORD v18[3]; // [rsp+90h] [rbp-18h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF

  v14 = a9;
  v15 = *a9;
  *a9 = 0LL;
  v18[0] = v15;
  v16 = v14[1];
  v14[1] = 0LL;
  v18[1] = v16;
  a9 = (_QWORD *)a1[1];
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext *,CVisual *,ISwapChainContent *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
    a1,
    &v19,
    &a9,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    (__int64)v18,
    a10,
    a11,
    a12,
    a13,
    a14,
    0,
    0LL);
  v17 = (std::_Ref_count_base *)v14[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
