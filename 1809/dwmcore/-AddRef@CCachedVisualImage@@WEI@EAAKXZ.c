/*
 * XREFs of ?AddRef@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800F0980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::AddRef(__int64 a1)
{
  return CHwndBitmap::AddRef((CHwndBitmap *)(a1 - 72));
}
