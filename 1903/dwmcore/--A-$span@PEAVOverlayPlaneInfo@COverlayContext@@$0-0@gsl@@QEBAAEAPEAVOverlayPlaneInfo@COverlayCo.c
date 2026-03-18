/*
 * XREFs of ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180183980
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E4EF4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E5170 (-RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayCon.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180183CF4 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEAVCRegion@@@Z @ 0x1801854E0 (-ComputeDesktopClip@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801857A8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180186134 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801BB944 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x18020E0DC (--$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniquenes.c)
 *     ?GetEndPoint@Segment@Path@@QEBA?AUD2D_POINT_2F@@XZ @ 0x18022AD8C (-GetEndPoint@Segment@Path@@QEBA-AUD2D_POINT_2F@@XZ.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18022B930 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  if ( a2 >= *a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1[1] + 8 * a2;
}
