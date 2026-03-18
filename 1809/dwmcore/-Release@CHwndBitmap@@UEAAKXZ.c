/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x180064970
 * Callers:
 *     ?Release@CHwndBitmap@@W7EAAKXZ @ 0x1800F0A10 (-Release@CHwndBitmap@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800F0A20 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800F0A30 (-Release@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800F0A40 (-Release@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CGdiSpriteBitmap::Release((CHwndBitmap *)((char *)this + 16));
}
