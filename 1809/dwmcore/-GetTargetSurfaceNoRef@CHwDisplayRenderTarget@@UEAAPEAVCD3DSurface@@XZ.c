/*
 * XREFs of ?GetTargetSurfaceNoRef@CHwDisplayRenderTarget@@UEAAPEAVCD3DSurface@@XZ @ 0x1800E78B0
 * Callers:
 *     ?GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WNA@EAAPEAVCD3DSurface@@XZ @ 0x1800F0F00 (-GetTargetSurfaceNoRef@CHwTextureRenderTarget@@WNA@EAAPEAVCD3DSurface@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DSurface *__fastcall CHwDisplayRenderTarget::GetTargetSurfaceNoRef(CHwDisplayRenderTarget *this)
{
  return (struct CD3DSurface *)*((_QWORD *)this + 25);
}
