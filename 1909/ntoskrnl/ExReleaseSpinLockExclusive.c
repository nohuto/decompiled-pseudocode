/*
 * XREFs of ExReleaseSpinLockExclusive @ 0x140109E70
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     PoFxReportDevicePoweredOn @ 0x14017B3D0 (PoFxReportDevicePoweredOn.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     PopSystemIrpCompletion @ 0x14059BCE0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockExclusive(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v5; // eax
  struct _KPRCB *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
  else
    *SpinLock = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v5 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v5;
      if ( !v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    v6 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v6);
  }
  __writecr8(OldIrql);
}
