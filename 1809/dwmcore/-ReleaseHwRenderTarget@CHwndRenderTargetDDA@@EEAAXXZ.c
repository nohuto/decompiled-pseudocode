/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x180176600
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18007D908 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTargetDDA::ReleaseHwRenderTarget(CHwndRenderTargetDDA *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 21);
  if ( v1 )
    CDisplay::ReleaseDDAHwRenderTarget(v1);
}
