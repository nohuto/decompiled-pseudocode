/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x1800F0DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 64));
}
