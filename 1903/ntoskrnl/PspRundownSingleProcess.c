/*
 * XREFs of PspRundownSingleProcess @ 0x140693078
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspTerminateProcess @ 0x1406727B8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x1408C9768 (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x1408C9BA0 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x1408C9C50 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeSetProcess @ 0x1400E57A0 (KeSetProcess.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     RtlInterlockedSetClearBits @ 0x1400E59C0 (RtlInterlockedSetClearBits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeRundownSecureProcess @ 0x1402A521C (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     PspClearProcessThreadCidRefs @ 0x14060EF18 (PspClearProcessThreadCidRefs.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     ObKillProcess @ 0x140691328 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140693DB0 (PspNotifyEmptyJobsInJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140693EC0 (PspSendProcessNotificationToJobChain.c)
 */

bool __fastcall PspRundownSingleProcess(ULONG_PTR BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r11
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v11; // rax
  _BYTE v12[48]; // [rsp+20h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_2;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 736, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1176) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 780));
    a2 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 780), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 736), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
  KeAbPostRelease(BugCheckParameter1 + 736);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
    if ( *(_QWORD *)(BugCheckParameter1 + 952) && (*(_DWORD *)(BugCheckParameter1 + 776) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 776), 8, 32);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v5, *(_QWORD *)(BugCheckParameter1 + 744));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 728) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v12);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1, v6);
      KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1864) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1880, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 1864) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1864), 0);
      *(_QWORD *)(BugCheckParameter1 + 1864) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1880));
      KeAbPostRelease(BugCheckParameter1 + 1880);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v7 = *(void **)(BugCheckParameter1 + 960);
    if ( v7 )
    {
      *(_QWORD *)(BugCheckParameter1 + 960) = 0LL;
      ObfDereferenceObject(v7);
    }
    v8 = *(void **)(BugCheckParameter1 + 1096);
    if ( v8 )
    {
      ObfDereferenceObjectWithTag(v8, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1096) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 952) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 4u, 0);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 744);
    if ( v9 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v9, BugCheckParameter1);
  }
  else
  {
    v11 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v11 )
    {
      ExSweepHandleTable((_KPROCESS *)BugCheckParameter1, v11, 1u);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
    }
  }
  return a2;
}
