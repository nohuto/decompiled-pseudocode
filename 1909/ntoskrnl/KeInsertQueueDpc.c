/*
 * XREFs of KeInsertQueueDpc @ 0x14009C950
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003B60 (EtwpPrepareDirtyBuffer.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140015A20 (KiChargeSchedulingGroupCycleTime.c)
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     PopQueueTargetDpc @ 0x14009A8B8 (PopQueueTargetDpc.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     EtwpRequestFlushTimer @ 0x1400E28C0 (EtwpRequestFlushTimer.c)
 *     KiScheduleNextForegroundBoost @ 0x140123C88 (KiScheduleNextForegroundBoost.c)
 *     KiInitializeUserApc @ 0x14012C5E0 (KiInitializeUserApc.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x14017E6B4 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x140192A68 (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x1402B2674 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x14032BCD0 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14032CB2C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1403351DC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1403352E0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x140335668 (EtwpCovSampLookasidePop.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE70 (KiCalibrateTimeAdjustment.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8570 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1405AA548 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x140610F10 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B64E0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
