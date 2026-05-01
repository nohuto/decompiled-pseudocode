/*
 * XREFs of CreateTlgAggregateSession @ 0x180106024
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x180106804 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1800809E0 (DestroyAggregateSession.c)
 */

RTL_SRWLOCK *__fastcall CreateTlgAggregateSession(char a1)
{
  HANDLE ProcessHeap; // rax
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v4; // rbx
  PTP_TIMER ThreadpoolTimer; // rax

  ProcessHeap = GetProcessHeap();
  v3 = (RTL_SRWLOCK *)HeapAlloc(ProcessHeap, 8u, 0x168uLL);
  v4 = v3;
  if ( !v3
    || (InitializeSRWLock(v3 + 33), a1)
    && (ThreadpoolTimer = CreateThreadpoolTimer(FlushTimerCallbackUserMode, v4, 0LL),
        (v4[43].Ptr = ThreadpoolTimer) == 0LL) )
  {
    DestroyAggregateSession(v4);
    return 0LL;
  }
  return v4;
}
