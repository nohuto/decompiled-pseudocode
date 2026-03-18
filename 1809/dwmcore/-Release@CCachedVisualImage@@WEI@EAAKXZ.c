/*
 * XREFs of ?Release@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800F0A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CHwndBitmap::Release((CHwndBitmap *)(a1 - 72));
}
