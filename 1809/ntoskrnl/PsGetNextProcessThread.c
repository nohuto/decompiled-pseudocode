/*
 * XREFs of PsGetNextProcessThread @ 0x140676AA0
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1406772D4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 *     PspBoostJobIoPriorityCallback @ 0x14068E510 (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x1406CB080 (PsResumeProcess.c)
 *     ExSwapinWorkerThreads @ 0x1406E15BC (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x140727C0C (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x14080FFB8 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1408108EC (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x14088CAC8 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x14088DF50 (PsSuspendProcess.c)
 *     NtGetNextThread @ 0x14088FBF0 (NtGetNextThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD **v3; // r13
  __int64 v4; // rbx
  _QWORD *v6; // r15
  int v7; // r14d
  signed __int64 *v8; // rbp
  _QWORD *v9; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD **)(a1 + 1160);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 728);
  ExAcquirePushLockSharedEx(a1 + 728, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[213];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 213;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 213)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v3 )
        goto LABEL_6;
    }
    v7 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}
