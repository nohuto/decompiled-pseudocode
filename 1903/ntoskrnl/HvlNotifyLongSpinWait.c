/*
 * XREFs of HvlNotifyLongSpinWait @ 0x140285170
 * Callers:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     MiLockOwnedProtoPage @ 0x140091DC0 (MiLockOwnedProtoPage.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiIpiSendRequestEx @ 0x1400B8BE8 (KiIpiSendRequestEx.c)
 *     KeFlushMultipleRangeTb @ 0x1400B91A0 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x1400B9C50 (KxFlushNonGlobalTb.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     KxSetTimeStampBusy @ 0x1400FF2B0 (KxSetTimeStampBusy.c)
 *     KiGenericCallDpcWorker @ 0x140114AF0 (KiGenericCallDpcWorker.c)
 *     KiIdleLoop @ 0x1401C75D0 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1401CA960 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1401CAB40 (SwapContext.c)
 *     PopHandleNextState @ 0x140598DD0 (PopHandleNextState.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlNotifyLongSpinWait()
{
  return HvcallCodeVa();
}
