/*
 * XREFs of ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800B908C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180055110 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18006E5A0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085B28 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B2B0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800B9060 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x1800C3150 (-PreRender@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180177F64 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180246880 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdr.c)
 * Callees:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800B90E8 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 */

void __fastcall CDirtyRegion::SetFullDirty(CDirtyRegion *this)
{
  char v1; // bl
  int v2; // esi

  v1 = *((_BYTE *)this + 2886);
  v2 = *((_DWORD *)this + 714);
  CDirtyRegion::Initialize(this);
  *((_BYTE *)this + 2886) = v1;
  if ( v1 )
    *((_DWORD *)this + 319) = 1;
  *((_DWORD *)this + 714) = v2;
}
