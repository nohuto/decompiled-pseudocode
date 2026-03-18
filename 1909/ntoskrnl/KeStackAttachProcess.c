/*
 * XREFs of KeStackAttachProcess @ 0x140013D00
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x140685748 (MmInitializeProcessAddressSpace.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1406BC550 (CmpStartCLFSLog.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406ECCE4 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7024 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)PROCESS;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&PROCESS->0 & 0x400) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    ApcState->Process = (_KPROCESS *)1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
LABEL_20:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, ApcState);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v8[5] - 1;
          v8[5] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, ApcState);
        }
      }
      do
        KeYieldProcessorEx(&v13);
      while ( CurrentThread->ThreadLock );
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v9[5];
          v9[5] = v12 + 1;
          if ( v12 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)ApcState);
    }
    else
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)&CurrentThread->600);
      ApcState->Process = 0LL;
    }
  }
}
