/*
 * XREFs of KeReleaseSpinLock @ 0x140008320
 * Callers:
 *     FsRtlPrivateLock @ 0x140006870 (FsRtlPrivateLock.c)
 *     NtCancelTimer @ 0x140007B10 (NtCancelTimer.c)
 *     NtAssociateWaitCompletionPacket @ 0x140008120 (NtAssociateWaitCompletionPacket.c)
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1400844D0 (IopDeleteFileObjectExtension.c)
 *     NtCancelWaitCompletionPacket @ 0x140113BA0 (NtCancelWaitCompletionPacket.c)
 *     IopCancelWaitCompletionPacket @ 0x140113DE0 (IopCancelWaitCompletionPacket.c)
 *     IopFreeWaitCompletionPacket @ 0x14013AFB0 (IopFreeWaitCompletionPacket.c)
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 *     PpmHighPerfRequestExpiration @ 0x140182410 (PpmHighPerfRequestExpiration.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401BEAB8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401BEB30 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopKeepAliveWorker @ 0x140299BF0 (IopKeepAliveWorker.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopWatchdogWorker @ 0x140301610 (PopWatchdogWorker.c)
 *     VfPutDmaAdapter @ 0x14096A6E0 (VfPutDmaAdapter.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A76E8 (KiReleaseSpinLockInstrumented.c)
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
