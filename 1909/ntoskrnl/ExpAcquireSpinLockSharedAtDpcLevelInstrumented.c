/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     ExpAddTagForBigPages @ 0x140036F80 (ExpAddTagForBigPages.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MmLockLoadedModuleListShared @ 0x14005F110 (MmLockLoadedModuleListShared.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiEndingOffsetWithLock @ 0x1400B88C0 (MiEndingOffsetWithLock.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiQueryAddressSpan @ 0x140104A80 (MiQueryAddressSpan.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAllocateCombineProto @ 0x14013EFD0 (MiAllocateCombineProto.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1400B6040 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1403317E0 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // esi
  char v6; // di
  unsigned __int64 v7; // rax
  int InterruptCount; // r15d
  int v9; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+70h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v17;
    v6 = 0;
    InterruptCount = v17;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5];
      SchedulerAssist[5] = v11 + 1;
      if ( v11 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  LOBYTE(v12) = ExpTryAcquireSpinLockShared(a1);
  if ( !(_BYTE)v12 )
  {
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[5] - 1;
        v13[5] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    v12 = ExpWaitForSpinLockSharedAndAcquire(a1, a2);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
  }
  if ( v6 )
  {
    v15 = __rdtsc();
    LOBYTE(v12) = PerfLogSpinLockAcquire((__int64)a1, v15, v15 - v9, v3, InterruptCount, 2);
  }
  return v12;
}
