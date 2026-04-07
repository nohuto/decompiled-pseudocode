/*
 * XREFs of ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x180008EE8
 * Callers:
 *     ??_ECTimer@@UEAAPEAXI@Z @ 0x1800078B0 (--_ECTimer@@UEAAPEAXI@Z.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x180008E94 (-Cancel@CTimer@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTimer::_DestroyThreadPoolTimer(CTimer *this, char a2)
{
  struct _TP_TIMER *v2; // rbx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v2
    && v2 == (struct _TP_TIMER *)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)this + 7,
                                   0LL,
                                   (signed __int64)v2) )
  {
    if ( IsThreadpoolTimerSet(v2) )
    {
      SetThreadpoolTimer(v2, 0LL, 0, 0);
      if ( a2 )
        WaitForThreadpoolTimerCallbacks(v2, 1);
    }
    CloseThreadpoolTimer(v2);
  }
}
