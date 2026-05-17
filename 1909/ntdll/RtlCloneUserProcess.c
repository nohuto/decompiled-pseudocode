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

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v8; // esi
  int v9; // ebp
  int v10; // r15d
  int v11; // edi
  __int64 v12; // rcx
  struct _RTLP_FLS_CONTEXT *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  volatile signed __int64 *v17; // rbx
  __int64 v18; // r14
  int v19; // ebx
  struct _RTLP_FLS_CONTEXT *v20; // rcx
  unsigned int UserProcess; // eax
  unsigned int v22; // ebp
  unsigned int v23; // ebx
  struct _RTLP_FLS_CONTEXT *v24; // rcx
  _QWORD v25[8]; // [rsp+30h] [rbp-68h] BYREF

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v8 = 2;
  v9 = 2 * (a1 & 2);
  v10 = a1 & 1;
  v11 = a1 & 4;
  if ( (a1 & 4) != 0 )
    goto LABEL_11;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return (unsigned int)-1073741420;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock(v12);
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare(v13);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock, v14, v15, v16);
  v17 = (volatile signed __int64 *)&unk_1801661D8;
  v18 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v17);
    v17 += 2;
    --v18;
  }
  while ( v18 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0);
  v19 = RtlLockHeapManagerForCloning();
  if ( v19 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    v19 = 0;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete(v20, 0);
    LdrpCompleteProcessCloning(0);
  }
  if ( v19 < 0 )
    return (unsigned int)v19;
LABEL_11:
  memset(v25, 0, 0x38uLL);
  v25[1] = a2;
  LOWORD(v25[0]) = 1;
  v25[2] = a3;
  v25[4] = a4;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v9, v10, (__int64)v25, a5);
  v22 = UserProcess;
  if ( !v11 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v23 = 1;
      v8 = 1;
      qword_180164FF0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_180164FE8 = -2;
      dword_180164FEC = 1;
      qword_180164FF8 = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v23 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v8);
    if ( v8 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v23);
    LdrpUnlockTlsDelayedReclaimTable(v23);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete(v24, v23);
    LdrpCompleteProcessCloning(v23);
    if ( v23 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v22;
}
