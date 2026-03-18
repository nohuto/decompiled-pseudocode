/*
 * XREFs of ?AddRef@CHwndBitmap@@UEAAKXZ @ 0x1800648A0
 * Callers:
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800F0960 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CHwndBitmap@@WBA@EAAKXZ @ 0x1800F0970 (-AddRef@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800F0980 (-AddRef@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800F0990 (-AddRef@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::AddRef(CHwndBitmap *this)
{
  return CMILCOMBase::InternalAddRef((CHwndBitmap *)((char *)this + 16));
}
