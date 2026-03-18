/*
 * XREFs of KeInsertQueueDpc @ 0x1400BCAD0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003ADC (EtwpPrepareDirtyBuffer.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140014B30 (KiChargeSchedulingGroupCycleTime.c)
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     EtwpRequestFlushTimer @ 0x1400B27D8 (EtwpRequestFlushTimer.c)
 *     PopQueueTargetDpc @ 0x1400BAA48 (PopQueueTargetDpc.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiScheduleNextForegroundBoost @ 0x140122B78 (KiScheduleNextForegroundBoost.c)
 *     KiInitializeUserApc @ 0x14012BB10 (KiInitializeUserApc.c)
 *     MmSetAccessLogging @ 0x14017DFC4 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x14019717C (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x1402B2914 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x14032C280 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14032D0DC (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14033577C (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140335880 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x140335C08 (EtwpCovSampLookasidePop.c)
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE90 (KiCalibrateTimeAdjustment.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8590 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1405AA568 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x14060F400 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406BAD50 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 *     EtwInitialize @ 0x14076B184 (EtwInitialize.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
