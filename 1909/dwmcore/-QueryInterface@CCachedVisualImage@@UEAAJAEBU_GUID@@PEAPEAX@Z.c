/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D7CE0
 * Callers:
 *     ?QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F11B0 (-QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F11C0 (-QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F11D0 (-QueryInterface@CCachedVisualImage@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F11E0 (-QueryInterface@CCachedVisualImage@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::QueryInterface(CCachedVisualImage *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCachedVisualImage *)((char *)this + 16), a2, a3);
}
