/*
 * XREFs of ?AddRef@CHwndBitmap@@UEAAKXZ @ 0x1800C0150
 * Callers:
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800ED480 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CHwndBitmap@@WBA@EAAKXZ @ 0x1800ED490 (-AddRef@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800ED4A0 (-AddRef@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800ED4B0 (-AddRef@CCachedVisualImage@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::AddRef(CHwndBitmap *this)
{
  return CMILCOMBase::InternalAddRef((CHwndBitmap *)((char *)this + 16));
}
