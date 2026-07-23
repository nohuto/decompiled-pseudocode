/*
 * XREFs of RtlCloneUserProcess @ 0x1800D6830
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18006D4C0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D7D0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x18008A450 (RtlpCreateUserProcess.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4FF8 (LdrpCompleteProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5728 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5E0C (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DE3E8 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE490 (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF164 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9D8 (RtlUnlockHeapManagerForCloning.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  int v8; // esi
  ULONG v9; // ebp
  ULONG v10; // r15d
  ULONG v11; // edi
  struct _RTLP_FLS_CONTEXT *v12; // rcx
  _RTL_SRWLOCK *v13; // rbx
  __int64 v14; // r14
  NTSTATUS v15; // ebx
  struct _RTLP_FLS_CONTEXT *v16; // rcx
  NTSTATUS UserProcess; // eax
  NTSTATUS v18; // ebp
  unsigned int v19; // ebx
  struct _RTLP_FLS_CONTEXT *v20; // rcx
  _QWORD v21[8]; // [rsp+30h] [rbp-68h] BYREF

  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v8 = 2;
  v9 = 2 * (ProcessFlags & 2);
  v10 = ProcessFlags & 1;
  v11 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) != 0 )
    goto LABEL_11;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return -1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  RtlpFlsClonePrepare(v12);
  RtlEnterCriticalSection(&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v13 = &SRWLock;
  v14 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v13);
    v13 += 2;
    --v14;
  }
  while ( v14 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0);
  v15 = RtlLockHeapManagerForCloning();
  if ( v15 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    v15 = 0;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete(v16, 0);
    LdrpCompleteProcessCloning(0);
  }
  if ( v15 < 0 )
    return v15;
LABEL_11:
  memset(v21, 0, 0x38uLL);
  v21[1] = ProcessSecurityDescriptor;
  LOWORD(v21[0]) = 1;
  v21[2] = ThreadSecurityDescriptor;
  v21[4] = DebugPort;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v9, v10, (__int64)v21, (__int64)ProcessInformation);
  v18 = UserProcess;
  if ( !v11 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      v19 = 1;
      v8 = 1;
      FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      FastPebLock.LockCount = -2;
      FastPebLock.RecursionCount = 1;
      FastPebLock.LockSemaphore = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v19 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v8);
    if ( v8 == 1 )
      RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v19);
    LdrpUnlockTlsDelayedReclaimTable(v19);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete(v20, v19);
    LdrpCompleteProcessCloning(v19);
    if ( v19 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v18;
}
