/*
 * XREFs of ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140001920
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001410 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001B50 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     IsRegisterHotKeyPresent @ 0x140004378 (IsRegisterHotKeyPresent.c)
 */

void __fastcall CDwmAppHost::OnClose(CDwmAppHost *this)
{
  if ( (unsigned __int8)IsRegisterHotKeyPresent(this) )
    UnregisterHotKey(hwnd, 0);
  DestroyWindow(hwnd);
  hwnd = 0LL;
}
