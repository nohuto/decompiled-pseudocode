/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WDI@EAAKXZ @ 0x1800F0D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 56));
}
