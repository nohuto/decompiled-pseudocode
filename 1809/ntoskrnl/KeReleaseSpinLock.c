/*
 * XREFs of KeReleaseSpinLock @ 0x140063080
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     FsRtlPrivateLock @ 0x14008C8F0 (FsRtlPrivateLock.c)
 *     NtCancelWaitCompletionPacket @ 0x14008DC40 (NtCancelWaitCompletionPacket.c)
 *     PnpDeviceActionWorker @ 0x14015F2E0 (PnpDeviceActionWorker.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401B3F6C (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401B3FE4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140290E38 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v5; // eax
  struct _KPRCB *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && NewIrql < 2u )
  {
    v6 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v6);
  }
  __writecr8(NewIrql);
}
