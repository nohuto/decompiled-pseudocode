/*
 * XREFs of ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800F0A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CHwndBitmap::Release((CHwndBitmap *)(a1 - 136));
}
