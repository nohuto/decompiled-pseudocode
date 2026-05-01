/*
 * XREFs of ?OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ @ 0x18009510C
 * Callers:
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1802F86B0 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x18009513C (-ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 */

void __fastcall CImpWorkerWndProc::OnWindowDestroyed(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    SetEvent(this[4]);
    CImpWorkerWndProc::ReleaseWndRef((CImpWorkerWndProc *)this);
  }
}
