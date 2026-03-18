/*
 * XREFs of ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800F1220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CHwndBitmap::Release((CHwndBitmap *)(a1 - 136));
}
