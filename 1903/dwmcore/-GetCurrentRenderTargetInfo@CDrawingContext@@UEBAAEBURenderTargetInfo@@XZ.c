/*
 * XREFs of ?GetCurrentRenderTargetInfo@CDrawingContext@@UEBAAEBURenderTargetInfo@@XZ @ 0x1800DA080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct RenderTargetInfo *__fastcall CDrawingContext::GetCurrentRenderTargetInfo(CDrawingContext *this)
{
  return (CDrawingContext *)((char *)this + 384);
}
