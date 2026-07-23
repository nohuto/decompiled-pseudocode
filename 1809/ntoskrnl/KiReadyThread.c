/*
 * XREFs of KiReadyThread @ 0x1400C5040
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1400C7760 (KiProcessExpiredTimerList.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x14010B700 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x14010CB00 (KiRequestProcessInSwap.c)
 */

int __fastcall KiReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // eax
  volatile signed __int32 *v7; // rdi
  signed __int64 v8; // rax
  signed __int64 *v9; // rbx
  signed __int64 v10; // rcx

  v4 = *(_DWORD *)(a2 + 120);
  if ( (v4 & 0x20000) != 0 )
  {
    if ( (v4 & 0x100000) == 0 )
      goto LABEL_6;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
    if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 572LL), 8u) & 7) == 0 )
      goto LABEL_6;
    v7 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v7);
    if ( (v7[143] & 7) == 0 )
    {
      _InterlockedAnd(v7, 0xFFFFFF7F);
LABEL_6:
      LODWORD(v8) = KiDeferredReadyThread(a1, a2, a3, a4);
      return v8;
    }
LABEL_12:
    LODWORD(v8) = KiRequestProcessInSwap(a2, v7);
    return v8;
  }
  v7 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v7);
  if ( (v7[143] & 7) != 0 )
    goto LABEL_12;
  _InterlockedExchangeAdd(v7 + 143, 8u);
  _InterlockedAnd(v7, 0xFFFFFF7F);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
  *(_BYTE *)(a2 + 388) = 6;
  v9 = (signed __int64 *)(a2 + 216);
  _m_prefetchw(&KiStackInSwapListHead);
  v8 = KiStackInSwapListHead;
  do
  {
    *v9 = v8;
    v10 = v8;
    v8 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v9, v8);
  }
  while ( v8 != v10 );
  if ( !v8 )
    LODWORD(v8) = KeSetEvent(&KiSwapEvent, 10, 0);
  return v8;
}
