/*
 * XREFs of MiEndingOffsetWithLock @ 0x1400B88C0
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140093AC0 (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x1400BB47C (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x1400C0E08 (MiViewMayContainPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140647770 (MiPfAllocateMdls.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1400B6040 (ExpTryAcquireSpinLockShared.c)
 *     MiEndingOffset @ 0x1400B89BC (MiEndingOffset.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033ACA4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v6; // rdi
  struct _KPRCB *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KPRCB *v14; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !ExpTryAcquireSpinLockShared(v2) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v10[5] - 1;
          v10[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
    }
  }
  v6 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  v7 = KeGetCurrentPrcb();
  v8 = v7->SchedulerAssist;
  if ( v8 )
  {
    if ( v7->NestingLevel <= 1u )
    {
      v13 = v8[5] - 1;
      v8[5] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(v7);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  __writecr8(CurrentIrql);
  return v6;
}
