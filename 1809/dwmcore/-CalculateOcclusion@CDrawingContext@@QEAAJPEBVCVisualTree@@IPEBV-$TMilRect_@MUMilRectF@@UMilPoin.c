/*
 * XREFs of ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015E3F0 (-CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F428 (-CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18021117C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008E70C (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E760 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x18008EBAC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008ED30 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::CalculateOcclusion(
        CDrawingContext *this,
        struct CVisualTree *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // rsi
  COcclusionContext *v9; // rcx
  COcclusionContext **v11; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebp
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = (COcclusionContext *)*((_QWORD *)this + 784);
  v11 = (COcclusionContext **)((char *)this + 6280);
  if ( v9 )
    goto LABEL_4;
  v12 = COcclusionContext::Create(*((struct CComposition **)this + 4), (struct COcclusionContext **)this + 785);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v9 = *v11;
    *((_QWORD *)this + 784) = *v11;
LABEL_4:
    *(_OWORD *)v18 = 0LL;
    v15 = COcclusionContext::Compute(v9, a5, a6, (CDrawingContext *)((char *)this + 3648), (__int64)v18);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180292820, 1u, v15, 0x2464u);
    else
      CDrawingContext::UpdateCVIRenderTargets(this, a2);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180292820, 1u, v12, 0x2452u);
LABEL_6:
  if ( v14 < 0 )
  {
    SAFE_DELETE<COcclusionContext>((char *)this + 6280);
    *((_QWORD *)this + 784) = 0LL;
  }
  else
  {
    v8 = *((_QWORD *)this + 784);
  }
  *a7 = v8;
  return (unsigned int)v14;
}
