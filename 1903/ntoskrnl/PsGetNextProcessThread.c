/*
 * XREFs of PsGetNextProcessThread @ 0x1406772C0
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140674DF4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x140696F20 (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x1406CDBB0 (PsResumeProcess.c)
 *     NtGetNextThread @ 0x1406E1870 (NtGetNextThread.c)
 *     PsEnumProcessThreads @ 0x140708240 (PsEnumProcessThreads.c)
 *     ExSwapinWorkerThreads @ 0x140727638 (ExSwapinWorkerThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140848684 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140848FC0 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1408C9D58 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1408CB120 (PsSuspendProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
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
