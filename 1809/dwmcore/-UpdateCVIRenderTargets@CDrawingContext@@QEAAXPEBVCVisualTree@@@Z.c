/*
 * XREFs of ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008E70C
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18008EAF0 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 */

void __fastcall CDrawingContext::UpdateCVIRenderTargets(CDrawingContext *this, const struct CVisualTree *a2)
{
  COcclusionContext *v4; // rcx

  v4 = (COcclusionContext *)*((_QWORD *)this + 784);
  if ( v4 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
      v4 = (COcclusionContext *)*((_QWORD *)this + 784);
    }
    COcclusionContext::UpdateCVIRenderTargets(v4, this, a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
  }
}
