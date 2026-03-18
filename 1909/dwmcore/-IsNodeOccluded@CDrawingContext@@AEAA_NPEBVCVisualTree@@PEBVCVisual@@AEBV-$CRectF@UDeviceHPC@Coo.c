/*
 * XREFs of ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016E6B0
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800247C4 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800D4528 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18016E528 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 */

bool __fastcall CDrawingContext::IsNodeOccluded(
        __int64 a1,
        const struct CVisualTree *a2,
        CVisual *a3,
        const struct D2D_RECT_F *a4)
{
  char v4; // bl
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v8; // r8

  v4 = 0;
  if ( *(_BYTE *)(a1 + 6347) )
  {
    OcclusionInfo = CVisual::GetOcclusionInfo(a3, a2);
    if ( OcclusionInfo )
    {
      LOBYTE(v8) = 1;
      return COcclusionContext::IsOccluded(*(_QWORD *)(a1 + 6272), a4, v8, *((_DWORD *)OcclusionInfo + 3)) != 0;
    }
  }
  return v4;
}
