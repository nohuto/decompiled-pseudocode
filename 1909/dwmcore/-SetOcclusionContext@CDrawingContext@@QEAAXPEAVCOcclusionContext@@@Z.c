/*
 * XREFs of ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18016FF58
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A4ABC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024F228 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x180025664 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

void __fastcall CDrawingContext::SetOcclusionContext(CDrawingContext *this, struct COcclusionContext *a2)
{
  COcclusionContext **v4; // rcx

  v4 = (COcclusionContext **)((char *)this + 6280);
  if ( a2 != *v4 )
    SAFE_DELETE<COcclusionContext>(v4);
  *((_QWORD *)this + 784) = a2;
  if ( !a2 )
    *((_BYTE *)this + 6347) = 0;
}
