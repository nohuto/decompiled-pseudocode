/*
 * XREFs of ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B44D0 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801A4584 (-CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A5688 (-CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180245BDC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ @ 0x180250198 (-CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180046F24 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@AEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180053AB4 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x1800B5288 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B5338 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::CalculateOcclusion(
        CDrawingContext *this,
        struct CVisualTree *a2,
        unsigned int a3,
        struct D2D_RECT_F *a4,
        int a5,
        char a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  COcclusionContext *v9; // rcx
  COcclusionContext **v13; // rdi
  signed int v14; // eax
  __int64 v15; // rcx
  int v16; // ebp
  signed int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v21[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = (COcclusionContext *)*((_QWORD *)this + 784);
  v13 = (COcclusionContext **)((char *)this + 6280);
  if ( v9 )
    goto LABEL_4;
  v14 = COcclusionContext::Create(*((struct CComposition **)this + 4), (struct COcclusionContext **)this + 785);
  v16 = v14;
  if ( v14 >= 0 )
  {
    v9 = *v13;
    *((_QWORD *)this + 784) = *v13;
LABEL_4:
    *(_OWORD *)v21 = 0LL;
    v17 = COcclusionContext::Compute(v9, (__int64)a2, a3, a4, a5, a6, (CDrawingContext *)((char *)this + 3648), v21);
    v16 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_1802C0270, 1u, v17, 0x227Fu, 0LL);
    else
      CDrawingContext::UpdateCVIRenderTargets(this, a2);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802C0270, 1u, v14, 0x226Du, 0LL);
LABEL_6:
  if ( v16 < 0 )
  {
    SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 785, v19);
    *((_QWORD *)this + 784) = 0LL;
  }
  else
  {
    v8 = *((_QWORD *)this + 784);
  }
  *a7 = v8;
  return (unsigned int)v16;
}
