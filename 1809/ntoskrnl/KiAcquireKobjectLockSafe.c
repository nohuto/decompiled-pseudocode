/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400FBE10
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
 *     AlpcpSignalAndWait @ 0x1400ABCD0 (AlpcpSignalAndWait.c)
 *     KiDetachProcess @ 0x1400B9CA0 (KiDetachProcess.c)
 *     KeReleaseMutant @ 0x1400BFA10 (KeReleaseMutant.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C5100 (KiReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5230 (KiDirectSwitchThread.c)
 *     KeReleaseSemaphore @ 0x1400C5EC0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400C6330 (IoSetIoCompletionEx.c)
 *     KiTimerWaitTest @ 0x1400C7B70 (KiTimerWaitTest.c)
 *     KeInsertPriQueue @ 0x1400D18C0 (KeInsertPriQueue.c)
 *     KeReleaseSemaphoreEx @ 0x1400D2970 (KeReleaseSemaphoreEx.c)
 *     KeStartThread @ 0x1400D39B4 (KeStartThread.c)
 *     KeInsertQueue @ 0x1400DD000 (KeInsertQueue.c)
 *     KePulseEvent @ 0x1400F0BC0 (KePulseEvent.c)
 *     KeForceResumeThread @ 0x1400F1B9C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400F1C60 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1400F23A8 (KiSuspendThread.c)
 *     KeSuspendThread @ 0x1400F2668 (KeSuspendThread.c)
 *     KeResumeThread @ 0x1400F2728 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x1400F4A00 (KiThawSingleThread.c)
 *     KeWaitForGate @ 0x1400FA304 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400FA428 (KiWaitForAllObjects.c)
 *     KeRundownQueueEx @ 0x1400FA9BC (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1400FAAA0 (KeRundownQueueCommon.c)
 *     KiInsertQueueInternal @ 0x1400FACEC (KiInsertQueueInternal.c)
 *     KiTimer2Expiration @ 0x1400FB3F0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400FB900 (KiExpireTimer2.c)
 *     KiProcessThreadWaitList @ 0x1400FBE60 (KiProcessThreadWaitList.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC488 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x1400FD2C0 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x1400FD6A0 (KeInsertQueueEx.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     KeSetEventBoostPriorityEx @ 0x1401034C8 (KeSetEventBoostPriorityEx.c)
 *     KeTimeOutQueueWaiters @ 0x140106FB4 (KeTimeOutQueueWaiters.c)
 *     KiInSwapProcesses @ 0x14010B340 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14010B450 (KiOutSwapProcesses.c)
 *     KiSwitchQueue @ 0x140112408 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140112488 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeWakeWaitChain @ 0x140125BD8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1401276B0 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x14012C910 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x140135F74 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x14028E644 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1402905C8 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1402951A4 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140295280 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140298160 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14029AC68 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14029C100 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1402EA694 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14031D0E4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402713D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
