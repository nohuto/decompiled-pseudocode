/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x180203050
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WNA@EAAXAEBUMilRectF@@@Z @ 0x1800F0E20 (-DiscardRectangle@CHwTextureRenderTarget@@WNA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(CHwTextureRenderTarget *this, const struct MilRectF *a2)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2);
}
