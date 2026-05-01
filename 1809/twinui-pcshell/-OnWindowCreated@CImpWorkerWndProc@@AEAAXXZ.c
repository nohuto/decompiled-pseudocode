/*
 * XREFs of ?OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ @ 0x1800950F0
 * Callers:
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1802F857C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 * Callees:
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800950C8 (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 */

void __fastcall CImpWorkerWndProc::OnWindowCreated(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
    CImpWorkerWndProc::AddWndRef(this);
}
