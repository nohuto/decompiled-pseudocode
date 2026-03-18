/*
 * XREFs of ?DiscardRectangle@CHwTextureRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x180163430
 * Callers:
 *     ?DiscardRectangle@CHwTextureRenderTarget@@WJA@EAAXAEBUMilRectF@@@Z @ 0x1800ECAE0 (-DiscardRectangle@CHwTextureRenderTarget@@WJA@EAAXAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::DiscardRectangle(CHwTextureRenderTarget *this, const struct MilRectF *a2)
{
  CHwSurfaceRenderTarget::DiscardRectangle(this, a2);
}
