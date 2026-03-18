/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800F0DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 80));
}
