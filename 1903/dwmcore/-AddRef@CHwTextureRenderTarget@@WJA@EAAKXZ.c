/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WJA@EAAKXZ @ 0x1800EC760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 144));
}
