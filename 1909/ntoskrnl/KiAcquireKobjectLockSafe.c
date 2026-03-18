/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400E3310
 * Callers:
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     KeStartThread @ 0x14001C080 (KeStartThread.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B710 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x140068140 (KiReadyThread.c)
 *     KeReleaseMutant @ 0x14006B900 (KeReleaseMutant.c)
 *     KiDirectSwitchThread @ 0x14006BC80 (KiDirectSwitchThread.c)
 *     KiOutSwapProcesses @ 0x140074770 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140074BE8 (KiInSwapProcesses.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiRundownMutants @ 0x140080F0C (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400810BC (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x140081704 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14009F164 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x14009FD10 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x1400A3270 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KeSetEventBoostPriorityEx @ 0x1400C659C (KeSetEventBoostPriorityEx.c)
 *     KiDecrementProcessStackCount @ 0x1400CE120 (KiDecrementProcessStackCount.c)
 *     KePulseEvent @ 0x1400DB590 (KePulseEvent.c)
 *     KiInsertQueueInternal @ 0x1400E31B4 (KiInsertQueueInternal.c)
 *     KeRundownQueueEx @ 0x1400E34CC (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1400E35B0 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1400E3824 (KeDeleteMutant.c)
 *     KiSuspendThread @ 0x1400E5914 (KiSuspendThread.c)
 *     KeSuspendThread @ 0x1400E5C24 (KeSuspendThread.c)
 *     KeSetProcess @ 0x1400EA740 (KeSetProcess.c)
 *     KiFreezeSingleThread @ 0x1400F1900 (KiFreezeSingleThread.c)
 *     KiThawSingleThread @ 0x1400F1B9C (KiThawSingleThread.c)
 *     KeInsertQueue @ 0x1400FD170 (KeInsertQueue.c)
 *     IoSetIoCompletionEx @ 0x140104F40 (IoSetIoCompletionEx.c)
 *     PpmCheckRun @ 0x140107FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     KiSwitchQueue @ 0x14010CA68 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010CAE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeDeregisterObjectNotification @ 0x140113EF0 (KeDeregisterObjectNotification.c)
 *     KeRemoveQueueEntry @ 0x140113FA8 (KeRemoveQueueEntry.c)
 *     KiProcessThreadWaitList @ 0x140114160 (KiProcessThreadWaitList.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140118F10 (KiWaitForAllObjects.c)
 *     KeTimeOutQueueWaiters @ 0x140123E00 (KeTimeOutQueueWaiters.c)
 *     KeResumeThread @ 0x1401258B8 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KiSwitchPriQueue @ 0x14013A1E8 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x1402A4E68 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1402A6D48 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1402AB834 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x1402AB910 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1402AED70 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x1402B1C2C (KiSatisfyThreadWait.c)
 *     KiSignalSynchronizationObjectEx @ 0x1402B1D2C (KiSignalSynchronizationObjectEx.c)
 *     KeRundownPriQueue @ 0x1402B33A0 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x140307C54 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14033BDB4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
