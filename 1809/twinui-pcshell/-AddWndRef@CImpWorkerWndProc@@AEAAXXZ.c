/*
 * XREFs of ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800950C8
 * Callers:
 *     ?OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ @ 0x1800950F0 (-OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1802F86B0 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImpWorkerWndProc::AddWndRef(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    if ( ++*((_DWORD *)this + 5) == 1 )
      ResetEvent(this[3]);
  }
}
