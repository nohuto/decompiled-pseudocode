/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400FBE90
 * Callers:
 *     KiFreezeSingleThread @ 0x140002A34 (KiFreezeSingleThread.c)
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     KiRundownMutants @ 0x1400898AC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     KeDeregisterObjectNotification @ 0x14008DE40 (KeDeregisterObjectNotification.c)
 *     KeSetProcess @ 0x14008F630 (KeSetProcess.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5170 (KiDirectSwitchThread.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6270 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     KeInsertPriQueue @ 0x1400D1940 (KeInsertPriQueue.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     KeInsertQueue @ 0x1400DD080 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0C40 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x1400F1C1C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 *     KeSuspendThread @ 0x1400F26E8 (KeSuspendThread.c)
 *     KeResumeThread @ 0x1400F27A8 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x1400F4A80 (KiThawSingleThread.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400FA4A8 (KiWaitForAllObjects.c)
 *     KeRundownQueueEx @ 0x1400FAA3C (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1400FAB20 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FAD6C (KiInsertQueueInternal.c)
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC508 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x1400FD340 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 *     KeTimeOutQueueWaiters @ 0x140107034 (KeTimeOutQueueWaiters.c)
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 *     KiSwitchQueue @ 0x140112478 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1401124F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x14012C9E0 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x140136044 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x14028E834 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1402907B8 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x140295394 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140295470 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140298350 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14029AE58 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14029C2F0 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1402EA884 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14031D2D4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
