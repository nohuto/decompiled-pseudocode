/*
 * XREFs of ?AddRef@CHwndBitmap@@WBA@EAAKXZ @ 0x1800F1150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::AddRef(__int64 a1)
{
  return CHwndBitmap::AddRef((CHwndBitmap *)(a1 - 16));
}
