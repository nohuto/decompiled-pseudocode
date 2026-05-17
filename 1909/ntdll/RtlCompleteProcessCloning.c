/*
 * XREFs of RtlCompleteProcessCloning @ 0x18009BF80
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18006D4C0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D7D0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4FF8 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5728 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5E0C (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DE3E8 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9D8 (RtlUnlockHeapManagerForCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  unsigned int v2; // edi
  void *UniqueThread; // rdx
  struct _RTLP_FLS_CONTEXT *v4; // rcx

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180164FF8 = 0LL;
    qword_180164FF0 = (__int64)UniqueThread;
    dword_180164FE8 = -2;
    dword_180164FEC = 1;
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
    RtlpProtectedPoliciesSRWLock = 1LL;
  else
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpFlsCloneComplete(v4, a1);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
  }
}
