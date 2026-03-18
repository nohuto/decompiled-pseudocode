/*
 * XREFs of ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180163440
 * Callers:
 *     ?GetBits@CHwTextureRenderTarget@@WJA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800ECAF0 (-GetBits@CHwTextureRenderTarget@@WJA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
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
