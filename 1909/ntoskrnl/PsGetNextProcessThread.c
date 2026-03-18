/*
 * XREFs of PsGetNextProcessThread @ 0x14067C9D0
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PspTerminateAllThreads @ 0x14067A1DC (PspTerminateAllThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14067A504 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x14068A490 (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x1406CC950 (PsResumeProcess.c)
 *     NtGetNextThread @ 0x1406E2EF0 (NtGetNextThread.c)
 *     PsEnumProcessThreads @ 0x14070A020 (PsEnumProcessThreads.c)
 *     ExSwapinWorkerThreads @ 0x14072BB98 (ExSwapinWorkerThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1408486C0 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1408C9638 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1408CAA00 (PsSuspendProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
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
  v8 = (signed __int64 *)(a1 + 736);
  ExAcquirePushLockSharedEx(a1 + 736, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[215];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 215;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 215)) )
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
