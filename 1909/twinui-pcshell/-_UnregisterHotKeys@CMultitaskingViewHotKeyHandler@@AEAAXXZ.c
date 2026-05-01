/*
 * XREFs of ?_UnregisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAXXZ @ 0x180368604
 * Callers:
 *     ?Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ @ 0x180367E30 (-Destroy@CMultitaskingViewHotKeyHandler@@UEAAXXZ.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18036827C (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewHotKeyHandler::_UnregisterHotKeys(CMultitaskingViewHotKeyHandler *this)
{
  if ( *((_DWORD *)this + 18) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    *((_DWORD *)this + 18) = 0;
  }
}
