/*
 * XREFs of ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x1803605F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x18035FD4C (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnKeyUp(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
