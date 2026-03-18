/*
 * XREFs of ?Present@CHwTextureRenderTarget@@WNA@EAAJ_N@Z @ 0x1800F0F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Present(__int64 a1, const struct CRegion *a2)
{
  return CRenderTargetBitmap::AddDirtyRegion((CRenderTargetBitmap *)(a1 - 208), a2);
}
