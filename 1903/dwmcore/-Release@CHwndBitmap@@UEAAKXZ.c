/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x1800C01A0
 * Callers:
 *     ?Release@CHwndBitmap@@W7EAAKXZ @ 0x1800ED530 (-Release@CHwndBitmap@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800ED540 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800ED550 (-Release@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800ED560 (-Release@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CGdiSpriteBitmap::Release((CHwndBitmap *)((char *)this + 16));
}
