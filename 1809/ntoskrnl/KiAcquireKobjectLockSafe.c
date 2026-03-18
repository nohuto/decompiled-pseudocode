/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400FBDF0
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
 *     KiRundownMutants @ 0x1400898BC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     KeDeregisterObjectNotification @ 0x14008DF20 (KeDeregisterObjectNotification.c)
 *     KeSetProcess @ 0x14008F710 (KeSetProcess.c)
 *     AlpcpSignalAndWait @ 0x1400ABCB0 (AlpcpSignalAndWait.c)
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 *     KeReleaseMutant @ 0x1400BF9F0 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2F50 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C50E0 (KiReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5210 (KiDirectSwitchThread.c)
 *     KeReleaseSemaphore @ 0x1400C5EA0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6310 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7B50 (KiTimerWaitTest.c)
 *     KeInsertPriQueue @ 0x1400D18A0 (KeInsertPriQueue.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2950 (KeReleaseSemaphoreEx.c)
 *     KeStartThread @ 0x1400D3994 (KeStartThread.c)
 *     KeInsertQueue @ 0x1400DCFE0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0BA0 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x1400F1B7C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400F1C40 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1400F2388 (KiSuspendThread.c)
 *     KeSuspendThread @ 0x1400F2648 (KeSuspendThread.c)
 *     KeResumeThread @ 0x1400F2708 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x1400F49E0 (KiThawSingleThread.c)
 *     KeWaitForGate @ 0x1400FA2E4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400FA408 (KiWaitForAllObjects.c)
 *     KeRundownQueueEx @ 0x1400FA99C (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1400FAA80 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FACCC (KiInsertQueueInternal.c)
 *     KiTimer2Expiration @ 0x1400FB3D0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400FB8E0 (KiExpireTimer2.c)
 *     KiProcessThreadWaitList @ 0x1400FBE40 (KiProcessThreadWaitList.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC468 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x1400FD2A0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD680 (KeInsertQueueEx.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     KeSetEventBoostPriorityEx @ 0x1401034A8 (KeSetEventBoostPriorityEx.c)
 *     KeTimeOutQueueWaiters @ 0x140106F94 (KeTimeOutQueueWaiters.c)
 *     KiInSwapProcesses @ 0x14010B320 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14010B430 (KiOutSwapProcesses.c)
 *     KiSwitchQueue @ 0x1401123E8 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140112468 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeWakeWaitChain @ 0x140125BB8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140127690 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x14012C8F0 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x140135F54 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x14028E544 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1402904C8 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1402950A4 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140295180 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140298060 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14029AB68 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14029C000 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1402EA594 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14031CFE4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402712D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298230 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
