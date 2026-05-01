/*
 * XREFs of ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x18009513C
 * Callers:
 *     ?OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ @ 0x18009510C (-OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1802F86B0 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImpWorkerWndProc::ReleaseWndRef(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    if ( (*((_DWORD *)this + 5))-- == 1 )
      SetEvent(this[3]);
  }
}
