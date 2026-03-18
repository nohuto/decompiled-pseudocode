/*
 * XREFs of ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800259E8
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002394C (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A3DC8 (-CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A4ABC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     ?CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024EA28 (-CalcOcclusion@CLocalAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024F228 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024E70 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

struct CDrawingContext *__fastcall CRenderTarget::GetDrawingContext(struct CComposition **this)
{
  struct CDrawingContext **v1; // rbx
  int v3; // eax
  unsigned int v4; // ecx

  v1 = this + 14;
  if ( !this[14] )
  {
    v3 = CDrawingContext::Create(this[2], v1);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x3Du, 0LL);
  }
  return *v1;
}
