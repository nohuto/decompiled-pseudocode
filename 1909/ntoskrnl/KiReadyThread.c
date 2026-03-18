/*
 * XREFs of KiReadyThread @ 0x140068140
 * Callers:
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x140074960 (KiReadyOutSwappedThreads.c)
 *     KiProcessExpiredTimerList @ 0x1400A3270 (KiProcessExpiredTimerList.c)
 *     KiProcessThreadWaitList @ 0x140114160 (KiProcessThreadWaitList.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x140109310 (KiRequestProcessInSwap.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 v5; // rax
  volatile signed __int32 *v6; // rdi
  signed __int64 *v7; // rbx
  signed __int64 v8; // rcx
  __int64 v9; // rsi

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20000) != 0 )
  {
    if ( (v2 & 0x100000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 576LL), 8u) & 7) != 0 )
      {
        v9 = *(_QWORD *)(a2 + 184);
        KiAcquireKobjectLockSafe(v9);
        if ( (*(_DWORD *)(v9 + 576) & 7) != 0 )
        {
          LODWORD(v5) = KiRequestProcessInSwap(a2, v9);
          return v5;
        }
        _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      }
    }
    LODWORD(v5) = KiDeferredReadyThread(a1, a2);
    return v5;
  }
  v6 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v6);
  if ( (v6[144] & 7) != 0 )
  {
    LODWORD(v5) = KiRequestProcessInSwap(a2, v6);
  }
  else
  {
    _InterlockedExchangeAdd(v6 + 144, 8u);
    _InterlockedAnd(v6, 0xFFFFFF7F);
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
    *(_BYTE *)(a2 + 388) = 6;
    v7 = (signed __int64 *)(a2 + 216);
    _m_prefetchw(&KiStackInSwapListHead);
    v5 = KiStackInSwapListHead;
    do
    {
      *v7 = v5;
      v8 = v5;
      v5 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v7, v5);
    }
    while ( v5 != v8 );
    if ( !v5 )
      LODWORD(v5) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v5;
}
