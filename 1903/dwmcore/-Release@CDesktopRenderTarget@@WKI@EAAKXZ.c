/*
 * XREFs of ?Release@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800ECF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 168));
}
