/*
 * XREFs of DestroyAggregateSession @ 0x1800830A0
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x180082FB8 (TlgUnregisterAggregateProvider.c)
 *     CreateTlgAggregateSession @ 0x180125034 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x180125814 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1800830D4 (CancelTimerCallbacksAndDeleteTimer.c)
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
