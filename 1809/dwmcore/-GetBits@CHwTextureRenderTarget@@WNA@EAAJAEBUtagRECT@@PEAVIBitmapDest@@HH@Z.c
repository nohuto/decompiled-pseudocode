/*
 * XREFs of ?GetBits@CHwTextureRenderTarget@@WNA@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800F0E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetBits(
        __int64 a1,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CHwTextureRenderTarget::GetBits((CHwTextureRenderTarget *)(a1 - 208), a2, a3, a4, a5);
}
