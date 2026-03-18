/*
 * XREFs of ?RemoveBackdropBlur@CBackdropRegion@@AEAAXI@Z @ 0x180250FE8
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180035450 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     <none>
 */

void __fastcall CBackdropRegion::RemoveBackdropBlur(CBackdropRegion *this, unsigned int a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)(24LL * a2 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::clear_region(
    (__int64 *)this + 2,
    (v2 >> 63) + v2,
    1LL);
}
