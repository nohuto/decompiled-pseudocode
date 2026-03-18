/*
 * XREFs of KeReleaseSpinLock @ 0x140008290
 * Callers:
 *     FsRtlPrivateLock @ 0x1400067E0 (FsRtlPrivateLock.c)
 *     NtCancelTimer @ 0x140007A80 (NtCancelTimer.c)
 *     NtAssociateWaitCompletionPacket @ 0x140008090 (NtAssociateWaitCompletionPacket.c)
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1400840D0 (IopDeleteFileObjectExtension.c)
 *     NtCancelWaitCompletionPacket @ 0x140114310 (NtCancelWaitCompletionPacket.c)
 *     IopCancelWaitCompletionPacket @ 0x140114550 (IopCancelWaitCompletionPacket.c)
 *     IopFreeWaitCompletionPacket @ 0x14013AA94 (IopFreeWaitCompletionPacket.c)
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     PpmHighPerfRequestExpiration @ 0x140181D20 (PpmHighPerfRequestExpiration.c)
 *     IopKeepAliveWorker @ 0x140299E90 (IopKeepAliveWorker.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     PopWatchdogWorker @ 0x140301B60 (PopWatchdogWorker.c)
 *     VfPutDmaAdapter @ 0x14096A6E0 (VfPutDmaAdapter.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && NewIrql < 2u )
  {
    v6 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v6, SchedulerAssist);
  }
  __writecr8(NewIrql);
}
