/*
 * XREFs of PspExitThread @ 0x14060EBC8
 * Callers:
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
 *     KiSchedulerApcTerminate @ 0x1406D2E00 (KiSchedulerApcTerminate.c)
 *     NtTerminateProcess @ 0x1406D6760 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140013E40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     MmSessionGetWin32Callouts @ 0x14001D200 (MmSessionGetWin32Callouts.c)
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     KiRundownMutants @ 0x140080F0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     ExTimerRundown @ 0x140081674 (ExTimerRundown.c)
 *     KeQuerySystemTimeUnsafe @ 0x140082404 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x140082440 (KeQuerySystemTimePrecise.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     PsAttachSiloToCurrentThread @ 0x14008D080 (PsAttachSiloToCurrentThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     KeForceResumeProcess @ 0x1400F1960 (KeForceResumeProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwFreeVirtualMemory @ 0x1401C1010 (ZwFreeVirtualMemory.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeUnsecureThread @ 0x1402A4A98 (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     ExCallCallBack @ 0x1405EBA04 (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1405EBF80 (PspCallThreadNotifyRoutines.c)
 *     LpcRequestPort @ 0x14060E7A0 (LpcRequestPort.c)
 *     KeRundownApcQueues @ 0x14060F35C (KeRundownApcQueues.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 *     IoCancelThreadIo @ 0x14060F660 (IoCancelThreadIo.c)
 *     PsCaptureExceptionPort @ 0x140610964 (PsCaptureExceptionPort.c)
 *     PspEmptyPropertySet @ 0x140610A04 (PspEmptyPropertySet.c)
 *     PspClearProcessThreadCidRefs @ 0x140610A28 (PspClearProcessThreadCidRefs.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     ExWnfExitProcess @ 0x1406520E4 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x1406526F4 (LpcExitProcess.c)
 *     PspExitProcess @ 0x140652A2C (PspExitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     MmDeleteTeb @ 0x14067F450 (MmDeleteTeb.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     EtwTraceThread @ 0x1406C3C30 (EtwTraceThread.c)
 *     DbgkExitProcess @ 0x14084A544 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14084A600 (DbgkExitThread.c)
 *     PspUmsUnInitThread @ 0x1408C8BF4 (PspUmsUnInitThread.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408C9378 (PspFreeCurrentThreadUserShadowStack.c)
 *     SeAuditProcessExit @ 0x1408DB804 (SeAuditProcessExit.c)
 */

__int64 __fastcall PspExitThread(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // r8
  struct _LIST_ENTRY *Blink; // rbx
  volatile signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  int v8; // ebx
  _QWORD *InitialStack; // r12
  void *v10; // rbx
  int v11; // eax
  char Reserved1; // al
  _QWORD *Teb; // rbx
  __int64 v14; // rax
  void *v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rcx
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _KTHREAD *Thread; // rcx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  _RTL_RUN_ONCE *v25; // rax
  PACCESS_TOKEN v26; // rbx
  void *v27; // rcx
  signed __int64 v28; // rax
  int v29; // eax
  _QWORD *v30; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _LIST_ENTRY *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-108h] BYREF
  struct _KTHREAD *v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-D0h]
  ULONG_PTR v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  _BYTE v38[48]; // [rsp+50h] [rbp-B8h] BYREF
  _KWAIT_BLOCK *WaitBlockList; // [rsp+80h] [rbp-88h]
  void *v40; // [rsp+88h] [rbp-80h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-78h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR v43; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v44[2]; // [rsp+A8h] [rbp-60h] BYREF
  _KPROCESS *Process; // [rsp+B8h] [rbp-50h]
  signed __int64 v46; // [rsp+C0h] [rbp-48h]
  signed __int64 v47; // [rsp+C8h] [rbp-40h]
  char v49; // [rsp+118h] [rbp+10h]
  PVOID Object; // [rsp+120h] [rbp+18h]
  PMDL MemoryDescriptorList; // [rsp+128h] [rbp+20h] BYREF

  memset(v38, 0, sizeof(v38));
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44[1] = CurrentThread;
  Process = CurrentThread->Process;
  v3 = (ULONG_PTR)Process;
  PspClearProcessThreadCidRefs(CurrentThread, *(_QWORD *)&CurrentThread[1].CurrentRunTime, CurrentThread);
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v3 != v4 )
    KeBugCheckEx(5u, v3, v4, CurrentThread->ApcStateIndex, (ULONG_PTR)CurrentThread);
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
  if ( (*(_DWORD *)(v3 + 1788) & 1) == 0 || *(_QWORD *)(v3 + 1856) )
    PspCallThreadNotifyRoutines(CurrentThread, 0, 0);
  v6 = (volatile signed __int64 *)(v3 + 736);
  ExAcquirePushLockExclusiveEx(v3 + 736, 0LL);
  if ( --*(_DWORD *)(v3 + 1176) )
  {
    if ( a1 != -1073741749 )
      *(_DWORD *)(v3 + 1188) = a1;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 780), 0x2000008u);
    KeForceResumeProcess(v3);
    v49 = 1;
    if ( *(_DWORD *)(v3 + 1620) == 259 )
    {
      if ( a1 == -1073741749 )
        *(_DWORD *)(v3 + 1620) = *(_DWORD *)(v3 + 1188);
      else
        *(_DWORD *)(v3 + 1620) = a1;
    }
    v22 = *(_QWORD **)(v3 + 1160);
    if ( v22 != (_QWORD *)(v3 + 1160) )
    {
      v23 = (_QWORD *)(v3 + 1160);
      v24 = 0LL;
      do
      {
        if ( v22 - 215 != (_QWORD *)CurrentThread )
        {
          if ( !*((_BYTE *)v22 - 1716) && ObReferenceObjectSafeWithTag((__int64)(v22 - 215)) )
          {
            v28 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
            v46 = v28;
            if ( (v28 & 2) != 0 && (v28 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 736));
            KeAbPostRelease(v3 + 736);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            KeWaitForSingleObject(v22 - 215, Executive, 0, 0, 0LL);
            if ( v24 )
              ObfDereferenceObjectWithTag(v24, 0x65547350u);
            v24 = v22 - 215;
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(v3 + 736, 0LL);
          }
          v23 = (_QWORD *)(v3 + 1160);
        }
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v23 );
      Object = v24;
    }
  }
  v7 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
  v47 = v7;
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 736));
  KeAbPostRelease(v3 + 736);
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
      v8 = a1;
      DbgkExitThread(a1);
      goto LABEL_22;
    }
    DbgkExitProcess(*(unsigned int *)(v3 + 1620));
  }
  v8 = a1;
LABEL_22:
  if ( (*(_BYTE *)(v3 + 728) & 1) != 0 && (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
  }
  if ( (_BYTE)KdDebuggerEnabled
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x20) != 0
    && (CurrentThread->Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
  {
    PsGetProcessServerSilo(v3);
    PspCatchCriticalBreak("Critical thread 0x%p (in %s) exited\n", (ULONG_PTR)CurrentThread, v3 + 1104, v8);
  }
  if ( v49 && (*(_DWORD *)(v3 + 780) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(v3);
    PspCatchCriticalBreak("Critical process 0x%p (%s) exited\n", v3, v3 + 1104, v8);
  }
  InitialStack = CurrentThread[1].InitialStack;
  if ( InitialStack )
  {
    *(_DWORD *)v38 = 3145736;
    *(_DWORD *)&v38[4] = 6;
    *(_QWORD *)&v38[40] = *(_QWORD *)&CurrentThread[1].Header.Lock;
    do
    {
      while ( 1 )
      {
        v29 = LpcRequestPort(InitialStack[1], (__m256i *)v38);
        if ( v29 != -1073741801 && v29 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject((PVOID)InitialStack[1]);
      v30 = (_QWORD *)*InitialStack;
      ExFreePoolWithTag(InitialStack, 0x70547350u);
      InitialStack = v30;
    }
    while ( v30 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
  {
    v10 = (void *)PsCaptureExceptionPort(v3);
    if ( v10 )
    {
      *(_DWORD *)v38 = 3145736;
      *(_DWORD *)&v38[4] = 6;
      *(_QWORD *)&v38[40] = *(_QWORD *)&CurrentThread[1].Header.Lock;
      while ( 1 )
      {
        v11 = LpcRequestPort((__int64)v10, (__m256i *)v38);
        if ( v11 != -1073741801 && v11 != -1073741670 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
      }
      ObfDereferenceObject(v10);
    }
  }
  if ( CurrentThread->WaitBlock[2].SparePtr )
  {
    v34 = CurrentThread;
    LODWORD(v35) = 1;
    Win32Callouts = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)Win32Callouts, 1LL, (__int64)&v34);
  }
  if ( v49 && *(_QWORD *)(v3 + 944) )
  {
    v36 = v3;
    LODWORD(v37) = 0;
    v25 = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)v25, 0LL, (__int64)&v36);
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) == 0 )
    KeBugCheckEx(0x94u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  IoCancelThreadIo();
  ExTimerRundown();
  CmNotifyRunDown(CurrentThread);
  KiRundownMutants((ULONG_PTR)KeGetCurrentThread());
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) != 0 || Reserved1 < 0 )
    PspUmsUnInitThread(CurrentThread);
  Teb = CurrentThread->Teb;
  if ( Teb )
  {
    CurrentThread->Teb = 0LL;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v33, 0);
    WaitBlockList = CurrentThread[1].WaitBlockList;
    if ( ((unsigned __int8)WaitBlockList & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && (*(_DWORD *)(v3 + 780) & 0x40000008) == 0 )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
      {
        v40 = (void *)Teb[655];
        BaseAddress = v40;
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        v14 = *(_QWORD *)(v3 + 1064);
        if ( v14 )
        {
          v16 = *(_WORD *)(v14 + 8);
          if ( v16 == 332 || v16 == 452 )
          {
            v44[0] = (PVOID)*((unsigned int *)Teb + 2947);
            v43 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v44, &v43, 0x8000u);
          }
        }
      }
      v15 = (void *)Teb[725];
      if ( v15 )
        ObCloseHandle(v15, 1);
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) != 0 )
        PspFreeCurrentThreadUserShadowStack();
      MmDeleteTeb(v3);
    }
  }
  p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((__int64 *)&CurrentThread[1].Header.WaitListHead);
  else
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
  if ( v49 )
  {
    *(_QWORD *)(v3 + 1728) = p_WaitListHead->Flink;
    LOBYTE(v17) = 1;
    PspExitProcess(v17, v3);
    v26 = PsReferencePrimaryToken((PEPROCESS)v3);
    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, v26) )
      SeAuditProcessExit((PEPROCESS)v3);
    ObFastDereferenceObject((signed __int64 *)(v3 + 864), (unsigned __int64)v26);
    ExWnfExitProcess(v3, 0LL);
    PspRundownSingleProcess(v3);
    LpcExitProcess(v3);
    v27 = *(void **)(v3 + 1736);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v3 + 1736) = 0LL;
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
