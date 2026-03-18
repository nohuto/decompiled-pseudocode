/*
 * XREFs of ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180187458
 * Callers:
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x180017614 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEBVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180059110 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E4EF4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180184BD8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801857A8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180186AD4 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(COverlayContext::OverlayPlaneInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 185) )
  {
    if ( *((_BYTE *)this + 187) )
      return *((_BYTE *)this + 189) == 0;
  }
  return result;
}
