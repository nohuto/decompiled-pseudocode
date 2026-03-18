/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1400447B0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140044350 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140045BF0 (NtSetInformationWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x140047BB0 (MiProcessWorkingSets.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14007D170 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     ExpDeleteWorkerFactory @ 0x1400E6CC0 (ExpDeleteWorkerFactory.c)
 *     NtCancelWaitCompletionPacket @ 0x140114310 (NtCancelWaitCompletionPacket.c)
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     WmipReceiveNotifications @ 0x140137B90 (WmipReceiveNotifications.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     PopSleepDeviceList @ 0x14015EA10 (PopSleepDeviceList.c)
 *     PopIrpWorker @ 0x14017AEC0 (PopIrpWorker.c)
 *     MiZeroNodePages @ 0x140188120 (MiZeroNodePages.c)
 *     ExpWorkerFactoryManagerThread @ 0x14018C1D0 (ExpWorkerFactoryManagerThread.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     PnprMarkOrMirrorPages @ 0x1405A9CD8 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1405ABA00 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     MiInitializePartitionHugeIoSpace @ 0x140889958 (MiInitializePartitionHugeIoSpace.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 OldIrql; // bl
  int v6; // eax
  struct _KPRCB *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( LockHandle->LockQueue.Next )
    goto LABEL_8;
  if ( LockHandle != (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)LockHandle) )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
LABEL_8:
    LockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v6;
      if ( !v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v7);
  }
  __writecr8(OldIrql);
}
