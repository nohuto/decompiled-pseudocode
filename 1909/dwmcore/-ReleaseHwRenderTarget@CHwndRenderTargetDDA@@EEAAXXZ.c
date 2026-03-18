/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x1801AA260
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18002B90C (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTargetDDA::ReleaseHwRenderTarget(CHwndRenderTargetDDA *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 21);
  if ( v1 )
    CDisplay::ReleaseDDAHwRenderTarget(v1);
}
