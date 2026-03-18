/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0
 * Callers:
 *     KeQueryAffinityProcess @ 0x140006550 (KeQueryAffinityProcess.c)
 *     KeQueryBasePriorityThread @ 0x14001387C (KeQueryBasePriorityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060B90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     InsertEventEntryInLookUpTable @ 0x14008A8AC (InsertEventEntryInLookUpTable.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     DbgEnumerateCallback @ 0x1400B7AE0 (DbgEnumerateCallback.c)
 *     MiAbortCombineScan @ 0x1400B8A28 (MiAbortCombineScan.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010D238 (KiActivateWaiterQueueWithNoLocks.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140126560 (vDbgPrintExWithPrefixInternal.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14015473C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x14015C634 (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x1402ACD9C (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1402B5DD8 (KiSelectCandidateProcessor.c)
 *     MiPurgeSlabEntries @ 0x1402DCA94 (MiPurgeSlabEntries.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14030B33C (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x14032A668 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x14032ADD8 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
