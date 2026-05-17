/*
 * XREFs of RtlPrepareForProcessCloning @ 0x18009C0C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4FF8 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5728 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5E0C (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DE3E8 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE490 (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 v0; // rcx
  struct _RTLP_FLS_CONTEXT *v1; // rcx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rdi
  int v7; // ebx
  struct _RTLP_FLS_CONTEXT *v8; // rcx
  __int64 result; // rax

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock(v0);
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare(v1);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v2, v3, v4);
  v5 = (volatile signed __int64 *)&unk_1801661D8;
  v6 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v5);
    v5 += 2;
    --v6;
  }
  while ( v6 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0LL);
  v7 = RtlLockHeapManagerForCloning();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2LL);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete(v8, 0);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v7;
  }
  return result;
}
