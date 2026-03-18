/*
 * XREFs of ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180170DD4
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B44D0 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017EF44 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017FEF4 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A637C (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A94C4 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x180250998 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ReadTexture(CDrawingContext *this)
{
  __int64 v1; // r9
  __int64 result; // rax

  v1 = *((_QWORD *)this + 44);
  result = 2291674884LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)v1 + 216LL))(
             *((_QWORD *)this + 44),
             *((_QWORD *)this + 48),
             (char *)this + 8);
  return result;
}
