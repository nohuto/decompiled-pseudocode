/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800D8820
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x18005A2A0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180082090 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800D7168 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D77A0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D7B0C (LdrForkMrdata.c)
 *     RtlpUnlockFlsCallbackVector @ 0x1800D8DA8 (RtlpUnlockFlsCallbackVector.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F2A30 (RtlUnlockHeapManagerForCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  void *UniqueThread; // rdx

  if ( a1 )
  {
    RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    RtlpFlsLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection(&FastPebLock);
  RtlpUnlockFlsCallbackVector(a1);
  RtlReleaseSRWLockExclusive(&RtlpFlsLock);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
