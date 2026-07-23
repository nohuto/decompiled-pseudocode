/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800D8AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrpCompleteProcessCloning @ 0x1800D7168 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D77A0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D7B0C (LdrForkMrdata.c)
 *     RtlpLockFlsCallbackVector @ 0x1800D8D48 (RtlpLockFlsCallbackVector.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D8DA8 (RtlpUnlockFlsCallbackVector.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 result; // rax
  _RTL_SRWLOCK *v1; // rbx
  __int64 v2; // rdi
  int v3; // ebx

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    result = 3221225876LL;
  }
  else
  {
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    RtlpLockFlsCallbackVector();
    RtlEnterCriticalSection(&FastPebLock);
    RtlAcquireSRWLockShared(&LdrpTlsLock);
    v1 = &stru_1801661B8;
    v2 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v1);
      v1 += 2;
      --v2;
    }
    while ( v2 );
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrForkMrdata(0);
    v3 = RtlLockHeapManagerForCloning();
    if ( v3 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
      RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
      result = 0LL;
      LdrpForkInProgress = 1;
    }
    else
    {
      LdrForkMrdata(2);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0);
      RtlLeaveCriticalSection(&FastPebLock);
      RtlpUnlockFlsCallbackVector(0LL);
      RtlReleaseSRWLockExclusive(&RtlpFlsLock);
      LdrpCompleteProcessCloning(0);
      return (unsigned int)v3;
    }
  }
  return result;
}
