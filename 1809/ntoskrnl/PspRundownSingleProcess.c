/*
 * XREFs of PspRundownSingleProcess @ 0x140604A48
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x140678A3C (PspTerminateProcess.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14075F000 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x14088C4F4 (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x14088C910 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x14088C9C0 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     KeSetProcess @ 0x14008F630 (KeSetProcess.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     RtlInterlockedSetClearBits @ 0x14008F800 (RtlInterlockedSetClearBits.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x14028E948 (KeRundownSecureProcess.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     PspClearProcessThreadCidRefs @ 0x1405F7DAC (PspClearProcessThreadCidRefs.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x14060494C (PspSendProcessNotificationToJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x140604D9C (PspNotifyEmptyJobsInJobChain.c)
 *     ObKillProcess @ 0x14066D67C (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x140698C50 (ExSweepHandleTable.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v3; // bp
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rdx
  _BYTE v14[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( a2 )
    goto LABEL_9;
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(BugCheckParameter1 + 728);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1176) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 772));
    v3 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
LABEL_9:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    if ( *(_QWORD *)(BugCheckParameter1 + 944) && (*(_DWORD *)(BugCheckParameter1 + 768) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 768), 8, 32);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v8, *(_QWORD *)(BugCheckParameter1 + 736));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 720) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v14);
      if ( *(_QWORD *)(BugCheckParameter1 + 1048) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1, v9);
      KiUnstackDetachProcess((__int64)v14, 0LL);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1816) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1832, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 1816) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1816), 0);
      *(_QWORD *)(BugCheckParameter1 + 1816) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1832), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1832));
      KeAbPostRelease(BugCheckParameter1 + 1832);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2128) )
    {
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2128), 0);
      *(_QWORD *)(BugCheckParameter1 + 2128) = 0LL;
    }
    v10 = *(void **)(BugCheckParameter1 + 952);
    if ( v10 )
    {
      *(_QWORD *)(BugCheckParameter1 + 952) = 0LL;
      ObfDereferenceObject(v10);
    }
    v11 = *(void **)(BugCheckParameter1 + 1096);
    if ( v11 )
    {
      ObfDereferenceObjectWithTag(v11, 0x72437350u);
      *(_QWORD *)(BugCheckParameter1 + 1096) = 0LL;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
      KeSetProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 944) )
    {
      PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 4u, 0);
      PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
    }
    v12 = *(_QWORD *)(BugCheckParameter1 + 736);
    if ( v12 )
      PspClearProcessThreadCidRefs((__int64)CurrentThread, v12, BugCheckParameter1);
  }
  else
  {
    v6 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)BugCheckParameter1);
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      ExSweepHandleTable(BugCheckParameter1, v6, v7);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    }
  }
  return v3;
}
