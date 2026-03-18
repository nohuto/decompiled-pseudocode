/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140339AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v3; // rbp
  volatile signed __int32 **v4; // rsi
  _KLOCK_ENTRY *v5; // rdi
  volatile signed __int32 *v7; // rcx

  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v3 = (ULONG_PTR)(BugCheckParameter2 + 32);
  v4 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
  if ( (unsigned __int64)BugCheckParameter2 >= v3 )
  {
LABEL_9:
    if ( v5 )
      v5->AcquiredByte |= 1u;
    return 1;
  }
  else
  {
    while ( !_interlockedbittestandset64(*v4, 0LL) )
    {
      if ( (unsigned __int64)++v4 >= v3 )
        goto LABEL_9;
    }
    while ( v4 != BugCheckParameter2 )
    {
      v7 = *--v4;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)*v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v7);
    }
    if ( v5 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v5);
    return 0;
  }
}
