/*
 * XREFs of DestroyAggregateSession @ 0x1800809E0
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1800808F8 (TlgUnregisterAggregateProvider.c)
 *     CreateTlgAggregateSession @ 0x180106024 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x180106804 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x180080A14 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    CancelTimerCallbacksAndDeleteTimer(lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
