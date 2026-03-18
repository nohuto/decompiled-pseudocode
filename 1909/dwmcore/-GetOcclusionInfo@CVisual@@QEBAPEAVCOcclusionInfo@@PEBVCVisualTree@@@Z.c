/*
 * XREFs of ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18016E528
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800816B4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016E6B0 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18018B9FC (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct COcclusionInfo *__fastcall CVisual::GetOcclusionInfo(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **TreeData; // rax
  __int64 v3; // r11
  __int64 **v4; // rbx
  __int64 v5; // rax

  TreeData = CVisual::FindTreeData(this, a2);
  v4 = TreeData;
  if ( TreeData )
  {
    v5 = (__int64)TreeData[4];
    if ( !v5 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64 *))(*v4[3] + 368))(v4[3]);
      v4[4] = (__int64 *)v5;
    }
    return (struct COcclusionInfo *)v5;
  }
  return (struct COcclusionInfo *)v3;
}
