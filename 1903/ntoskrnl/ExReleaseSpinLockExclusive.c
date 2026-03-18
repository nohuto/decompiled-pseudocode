/*
 * XREFs of ExReleaseSpinLockExclusive @ 0x14010A2A0
 * Callers:
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     PoFxReportDevicePoweredOn @ 0x14017ACE0 (PoFxReportDevicePoweredOn.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     PopSystemIrpCompletion @ 0x14059C460 (PopSystemIrpCompletion.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
