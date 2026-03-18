/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x1800ABF70
 * Callers:
 *     ?Release@CHwndBitmap@@W7EAAKXZ @ 0x1800F11F0 (-Release@CHwndBitmap@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800F1200 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800F1210 (-Release@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800F1220 (-Release@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CGdiSpriteBitmap::Release((CHwndBitmap *)((char *)this + 16));
}
