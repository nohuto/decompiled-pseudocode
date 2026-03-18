/*
 * XREFs of ?AddRef@CHwndBitmap@@UEAAKXZ @ 0x1800C0780
 * Callers:
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800F1140 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CHwndBitmap@@WBA@EAAKXZ @ 0x1800F1150 (-AddRef@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800F1160 (-AddRef@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800F1170 (-AddRef@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::AddRef(CHwndBitmap *this)
{
  return CMILCOMBase::InternalAddRef((CHwndBitmap *)((char *)this + 16));
}
