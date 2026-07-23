/*
 * XREFs of PspExitThread @ 0x1405F85E0
 * Callers:
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 *     KiSchedulerApcTerminate @ 0x140677960 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x14067B9D0 (NtTerminateProcess.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     MmSessionGetWin32Callouts @ 0x140088A50 (MmSessionGetWin32Callouts.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KeQuerySystemTimeUnsafe @ 0x14008A3B4 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     ExTimerRundown @ 0x14008AFC0 (ExTimerRundown.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2FF8 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1400F353C (KeForceResumeProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeUnsecureThread @ 0x14028E4B8 (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     MmDeleteTeb @ 0x1405E066C (MmDeleteTeb.c)
 *     ExCallCallBack @ 0x1405F5BA4 (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F5F90 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x1405F7DAC (PspClearProcessThreadCidRefs.c)
 *     PsCaptureExceptionPort @ 0x1405F8D1C (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x1405F8DBC (PspEmptyPropertySet.c)
 *     KeRundownApcQueues @ 0x1405F8DE0 (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     ExWnfExitProcess @ 0x140608A48 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140609018 (LpcExitProcess.c)
 *     PspExitProcess @ 0x140609E0C (PspExitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 *     LpcRequestPort @ 0x1406A2F10 (LpcRequestPort.c)
 *     IoCancelThreadIo @ 0x1406A7A58 (IoCancelThreadIo.c)
 *     DbgkExitProcess @ 0x140812648 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x1408126F0 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x14088C0B4 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x14088C6D0 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14088C820 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x14089E72C (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // ebx
  void *InitialStack; // r12
  void *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  char Reserved1; // al
  unsigned __int64 Teb; // rbx
  __int64 v15; // rax
  void *v16; // rcx
  __int16 v17; // dx
  __int64 v18; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  _RTL_RUN_ONCE *v26; // rax
  PACCESS_TOKEN v27; // rbx
  void *v28; // rcx
  int v29; // eax
  void *v30; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _LIST_ENTRY *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-F8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-D8h]
  void *v35; // [rsp+30h] [rbp-C8h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-B8h] BYREF
  ULONG_PTR v38; // [rsp+48h] [rbp-B0h] BYREF
  PVOID v39[2]; // [rsp+50h] [rbp-A8h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-98h]
  int v41; // [rsp+68h] [rbp-90h] BYREF
  int v42; // [rsp+6Ch] [rbp-8Ch]
  __int64 v43; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *v44; // [rsp+98h] [rbp-60h] BYREF
  int v45; // [rsp+A0h] [rbp-58h]
  ULONG_PTR v46; // [rsp+A8h] [rbp-50h] BYREF
  int v47; // [rsp+B0h] [rbp-48h]
  char v49; // [rsp+108h] [rbp+10h]
  PVOID Object; // [rsp+110h] [rbp+18h]
  PMDL MemoryDescriptorList; // [rsp+118h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v39[1] = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(
    (__int64)CurrentThread,
    *(_QWORD *)&CurrentThread[1].CurrentRunTime,
    (ULONG_PTR)CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( Process != (_KPROCESS *)v4 )
    KeBugCheckEx(5u, (ULONG_PTR)Process, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(0LL);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
    KeBugCheckEx(0xE9u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x20u, 0LL, CurrentThread->CombinedApcDisable, 0LL, 1uLL);
  if ( CurrentThread[1].ApcState.ApcListHead[1].Flink )
  {
    KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL);
    ObfDereferenceObjectWithTag(CurrentThread[1].ApcState.ApcListHead[1].Flink, 0x79517350u);
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
  }
  PspEmptyPropertySet(&CurrentThread[1].WaitBlockFill11[80]);
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CurrentThread[1].WaitStatus);
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  if ( Blink )
  {
    PopPowerRequestCleanUp((unsigned int *)CurrentThread[1].ApcState.ApcListHead[1].Blink);
    ObfDereferenceObject(Blink);
    CurrentThread[1].ApcState.ApcListHead[1].Blink = 0LL;
  }
  v49 = 0;
  Object = 0LL;
  LODWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) = a1;
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(CurrentThread, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(v3 + 1740) & 1) == 0 || *(_QWORD *)(v3 + 1808) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 728);
  ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
  if ( --*(_DWORD *)(v3 + 1176) )
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 1188) = a1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 772), 0x2000008u);
    KeForceResumeProcess(v3);
    v49 = 1;
    if ( *(_DWORD *)(v3 + 1572) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 1572) = *(_DWORD *)(v3 + 1188);
      else
        *(_DWORD *)(v3 + 1572) = a1;
    }
    v23 = *(_QWORD **)(v3 + 1160);
    if ( v23 != (_QWORD *)(v3 + 1160) )
    {
      v24 = (_QWORD *)(v3 + 1160);
      v25 = 0LL;
      do
      {
        if ( v23 - 213 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v23 - 1700) && ObReferenceObjectSafeWithTag((__int64)(v23 - 213)) )
          {
            if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728));
            KeAbPostRelease(v3 + 728);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v23 - 213, Executive, 0, 0, 0LL);
            if ( v25 )
              ObfDereferenceObjectWithTag(v25, 0x65547350u);
            v25 = v23 - 213;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 728, 0LL);
          }
          v24 = (_QWORD *)(v3 + 1160);
        }
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v24 );
      Object = v25;
    }
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 728));
  KeAbPostRelease(v3 + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x65547350u);
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
  {
    v32 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
    if ( v32 == (struct _LIST_ENTRY *)PsGetHostSilo()
      || (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v32[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v32 - 48) >> 8)] != PsJobType
      || (HIDWORD(v32[81].Blink) & 2) == 0 )
    {
      KeBugCheckEx(0x1CBu, (ULONG_PTR)CurrentThread, (ULONG_PTR)v32, v3, 1uLL);
    }
    ObfDereferenceObjectWithTag(v32, 0x6D497350u);
  }
  if ( *(_QWORD *)(v3 + 1056) && (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    if ( !v49 )
    {
      v7 = a1;
      DbgkExitThread(a1);
      goto LABEL_23;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 1572));
  }
  v7 = a1;
LABEL_23:
  if ( (*(_BYTE *)(v3 + 720) & 1) != 0 && (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
  }
  if ( (_BYTE)KdDebuggerEnabled
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0
    && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", CurrentThread, (const char *)(v3 + 1104));
  }
  if ( v49 && (*(_DWORD *)(v3 + 772) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    LODWORD(Timeout) = v7;
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", (const void *)v3, (const char *)(v3 + 1104));
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    v41 = 3145736;
    v42 = 6;
    v43 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v29 = LpcRequestPort(*((_QWORD *)InitialStack + 1), &v41);
        if ( v29 != -1073741801 && v29 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(*((PVOID *)InitialStack + 1));
      v30 = *(void **)InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v30;
    }
    while ( v30 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v9 = (void *)PsCaptureExceptionPort(v3);
    if ( v9 )
    {
      v41 = 3145736;
      v42 = 6;
      v43 = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v10 = LpcRequestPort(v9, &v41);
        if ( v10 != -1073741801 && v10 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v9);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    v44 = CurrentThread;
    v45 = 1;
    Win32Callouts = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)Win32Callouts, 1LL, (__int64)&v44);
  }
  if ( v49 && *(_QWORD *)(v3 + 936) )
  {
    v46 = v3;
    v47 = 0;
    v26 = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)v26, 0LL, (__int64)&v46);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread(), v11, v12);
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = (unsigned __int64)CurrentThread->Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v33, 0);
    if ( ((__int64)CurrentThread[1].WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 772) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v35 = *(void **)(Teb + 5240);
        BaseAddress = v35;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v15 = *(_QWORD *)(v3 + 1064);
        if ( v15 )
        {
          v17 = *(_WORD *)(v15 + 8);
          if ( v17 == 332 || v17 == 452 )
          {
            v39[0] = (PVOID)*(unsigned int *)(Teb + 11788);
            v38 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v39, &v38, 0x8000u);
          }
        }
      }
      v16 = *(void **)(Teb + 5800);
      if ( v16 )
        ObCloseHandle(v16, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb((_KPROCESS *)v3, Teb);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v49 )
  {
    *(_QWORD *)(v3 + 1680) = p_WaitListHead->Flink;
    LOBYTE(v18) = 1;
    PspExitProcess(v18, v3);
    v27 = PsReferencePrimaryToken((PEPROCESS)v3);
    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(135LL, v27) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 856), (unsigned __int64)v27);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3);
    LpcExitProcess(v3);
    v28 = *(void **)(v3 + 1688);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *(_QWORD *)(v3 + 1688) = 0LL;
    }
  }
  KeRundownApcQueues(CurrentThread);
  if ( CurrentThread->SchedulerApc.SystemArgument2 && PspLegoNotifyRoutine )
    PspLegoNotifyRoutine(CurrentThread);
  Thread = CurrentThread[1].WaitBlock[3].Thread;
  if ( Thread )
  {
    ExFreePoolWithTag(Thread, 0x63537350u);
    CurrentThread[1].WaitBlock[3].Thread = 0LL;
  }
  return KeTerminateThread((ULONG_PTR)CurrentThread);
}
