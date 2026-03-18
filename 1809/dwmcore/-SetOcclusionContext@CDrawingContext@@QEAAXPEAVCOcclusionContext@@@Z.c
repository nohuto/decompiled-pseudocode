/*
 * XREFs of ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180167180
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180160094 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x18008EBAC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

void __fastcall CDrawingContext::SetOcclusionContext(CDrawingContext *this, struct COcclusionContext *a2)
{
  COcclusionContext **v4; // rcx

  v4 = (COcclusionContext **)((char *)this + 6280);
  if ( a2 != *v4 )
    SAFE_DELETE<COcclusionContext>(v4, (unsigned int)a2);
  *((_QWORD *)this + 784) = a2;
  if ( !a2 )
    *((_BYTE *)this + 6347) = 0;
}
