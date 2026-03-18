/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x140044850
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140045C90 (NtSetInformationWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x140047C50 (MiProcessWorkingSets.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14007BABC (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     ExpDeleteWorkerFactory @ 0x1400EBC60 (ExpDeleteWorkerFactory.c)
 *     NtCancelWaitCompletionPacket @ 0x140113BA0 (NtCancelWaitCompletionPacket.c)
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 *     WmipReceiveNotifications @ 0x1401381D8 (WmipReceiveNotifications.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     PopSleepDeviceList @ 0x14015F0B0 (PopSleepDeviceList.c)
 *     PopIrpWorker @ 0x14017B5B0 (PopIrpWorker.c)
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     ExpWorkerFactoryManagerThread @ 0x14018CA50 (ExpWorkerFactoryManagerThread.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     PnprMarkOrMirrorPages @ 0x1405A9CB8 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1405AB9E0 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     MiInitializePartitionHugeIoSpace @ 0x140889178 (MiInitializePartitionHugeIoSpace.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
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
