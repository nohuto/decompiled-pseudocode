/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400A9C50
 * Callers:
 *     KeRegisterObjectNotification @ 0x1400082F0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KiOutSwapProcesses @ 0x140074500 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x140081304 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400813C8 (KiResumeThread.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KiInsertQueueInternal @ 0x1400AA238 (KiInsertQueueInternal.c)
 *     KeRundownQueueEx @ 0x1400AA4CC (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1400AA5B0 (KeRundownQueueCommon.c)
 *     KiSuspendThread @ 0x1400AF3C4 (KiSuspendThread.c)
 *     KeSuspendThread @ 0x1400AF684 (KeSuspendThread.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400BF2E4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x1400C33F0 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     KeSetProcess @ 0x1400E57A0 (KeSetProcess.c)
 *     KiFreezeSingleThread @ 0x1400EE8A0 (KiFreezeSingleThread.c)
 *     KiThawSingleThread @ 0x1400EEC40 (KiThawSingleThread.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     IoSetIoCompletionEx @ 0x140100320 (IoSetIoCompletionEx.c)
 *     PpmCheckRun @ 0x140108FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     KiSwitchQueue @ 0x14010D1B8 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010D238 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeDeregisterObjectNotification @ 0x140114660 (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x140114718 (KeRemoveQueueEntry.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 *     KeTimeOutQueueWaiters @ 0x140122CF0 (KeTimeOutQueueWaiters.c)
 *     KeResumeThread @ 0x140125248 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KiSwitchPriQueue @ 0x140139B10 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x1402A5108 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1402A6FE8 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1402ABAD4 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x1402ABBB0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1402AF010 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x1402B1ECC (KiSatisfyThreadWait.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1FCC (KiSignalSynchronizationObjectEx.c)
 *     KeRundownPriQueue @ 0x1402B3640 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1403081A4 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14033C354 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
