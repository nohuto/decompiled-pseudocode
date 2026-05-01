/*
 * XREFs of CreateTlgAggregateSession @ 0x1800E39F8
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1800E43E4 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _o_malloc_0 @ 0x18008509C (_o_malloc_0.c)
 *     DestroyAggregateSession @ 0x1800E3A8C (DestroyAggregateSession.c)
 */

__int64 __fastcall CreateTlgAggregateSession(char a1)
{
  char v2; // bl
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v4; // rdi
  PTP_TIMER ThreadpoolTimer; // rax

  v2 = 0;
  v3 = (RTL_SRWLOCK *)o_malloc_0(0x168uLL);
  v4 = v3;
  if ( v3
    && ((memset_0(v3, 0, 0x168uLL), InitializeSRWLock(v4 + 33), !a1)
     || (ThreadpoolTimer = CreateThreadpoolTimer(FlushTimerCallbackUserMode, v4, 0LL),
         (v4[43].Ptr = ThreadpoolTimer) != 0LL)) )
  {
    v2 = 1;
  }
  else
  {
    DestroyAggregateSession(v4);
  }
  return (unsigned __int64)v4 & -(__int64)(v2 != 0);
}
