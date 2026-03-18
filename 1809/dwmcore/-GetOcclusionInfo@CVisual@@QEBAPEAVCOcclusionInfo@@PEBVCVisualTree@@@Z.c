/*
 * XREFs of ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18015AE90
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18004A134 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016589C (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x1801809F8 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 *     ?TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z @ 0x1801AE228 (-TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z.c)
 *     ?TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CC204 (-TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

struct COcclusionInfo *__fastcall CVisual::GetOcclusionInfo(CVisual *this, const struct CVisualTree *a2)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *TreeData; // rax
  struct _LIST_ENTRY *v4; // rdi
  __int64 Flink; // rax

  v2 = 0LL;
  TreeData = CVisual::FindTreeData(this, a2);
  v4 = TreeData;
  if ( TreeData )
  {
    Flink = (__int64)TreeData[2].Flink;
    if ( !Flink )
    {
      Flink = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v4[1].Blink->Flink[20].Blink)(v4[1].Blink);
      v4[2].Flink = (struct _LIST_ENTRY *)Flink;
    }
    return (struct COcclusionInfo *)Flink;
  }
  return (struct COcclusionInfo *)v2;
}
