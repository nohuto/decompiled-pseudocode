/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0
 * Callers:
 *     KeQueryAffinityProcess @ 0x1400065E0 (KeQueryAffinityProcess.c)
 *     KeQueryBasePriorityThread @ 0x140013AAC (KeQueryBasePriorityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060C30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KiRundownMutants @ 0x140080F0C (KiRundownMutants.c)
 *     InsertEventEntryInLookUpTable @ 0x14008BBAC (InsertEventEntryInLookUpTable.c)
 *     MiAbortCombineScan @ 0x140098898 (MiAbortCombineScan.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     KeSetLegacyAffinityThread @ 0x1400FB6D0 (KeSetLegacyAffinityThread.c)
 *     DbgEnumerateCallback @ 0x1401049C0 (DbgEnumerateCallback.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010CAE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140154DDC (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x14015CCD4 (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x1402ACAFC (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1402B5B38 (KiSelectCandidateProcessor.c)
 *     MiPurgeSlabEntries @ 0x1402DC7F4 (MiPurgeSlabEntries.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14030ADEC (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x14032A0B8 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x14032A828 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // ett
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = SchedulerAssist[5];
        SchedulerAssist[5] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 && CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v6[5] - 1;
        v6[5] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v1);
    }
  }
}
