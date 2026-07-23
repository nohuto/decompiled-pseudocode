/*
 * XREFs of MiEndingOffsetWithLock @ 0x140031000
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14002CB18 (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x14002DBD0 (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x1400EAE80 (MiViewMayContainPage.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140699460 (MiPfAllocateMdls.c)
 * Callees:
 *     MiEndingOffset @ 0x140031090 (MiEndingOffset.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(__int64 *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // si
  __int64 v4; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v8; // eax
  struct _KPRCB *v9; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(*a1 + 72));
  v4 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v1 + 72, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v1 + 72), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 72));
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v8;
      if ( !v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  __writecr8(v3);
  return v4;
}
