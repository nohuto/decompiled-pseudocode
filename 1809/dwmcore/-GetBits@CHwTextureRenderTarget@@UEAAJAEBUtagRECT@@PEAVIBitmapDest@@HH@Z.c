/*
 * XREFs of ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180203060
 * Callers:
 *     ?GetBits@CHwTextureRenderTarget@@WNA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800F0E30 (-GetBits@CHwTextureRenderTarget@@WNA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CHwSurfaceRenderTarget::GetBits(this, a2, a3, a4, a5);
}
