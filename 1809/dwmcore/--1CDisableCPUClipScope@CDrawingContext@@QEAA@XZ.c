/*
 * XREFs of ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x180066AD0
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180018470 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180163988 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180166E78 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 *     ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4 (-GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180066B08 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope(
        CDrawingContext::CDisableCPUClipScope *this)
{
  __int64 v1; // r8
  __int64 v2; // r9

  if ( *(_QWORD *)this )
  {
    CScopedClipStack::PopGpuClipFromScope((CScopedClipStack *)(*(_QWORD *)this + 1008LL));
    *(_BYTE *)(v1 + 6345) = 1;
    --*(_DWORD *)(*(_QWORD *)v2 + 1032LL);
  }
}
