/*
 * XREFs of ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800F1140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSource::AddRef(__int64 a1)
{
  return CHwndBitmap::AddRef((CHwndBitmap *)(a1 - 8));
}
