/*
 * XREFs of ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C2FDC
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F290 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180180678 (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801C313C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CVisual::ExcludeFromVisibleRegion(CVisual *a1, __int64 a2, const struct CDrawingContext *a3)
{
  double v3; // xmm2_8
  unsigned int v4; // ebx
  CMoveRenderPassInfo *MoveRenderPassInfoRef; // rax
  float *v6; // r11
  signed int v7; // eax
  __int64 v8; // rcx

  v4 = 0;
  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a1, a3);
  if ( MoveRenderPassInfoRef )
  {
    v7 = CMoveRenderPassInfo::ExcludeFromVisibleRegion(MoveRenderPassInfoRef, v6, v3);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1464u, 0LL);
  }
  return v4;
}
