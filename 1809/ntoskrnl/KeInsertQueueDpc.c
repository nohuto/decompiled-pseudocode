/*
 * XREFs of KeInsertQueueDpc @ 0x140062190
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     PopQueueTargetDpc @ 0x1400A5FA0 (PopQueueTargetDpc.c)
 *     IopAllocateIrpPrivate @ 0x1400B92F0 (IopAllocateIrpPrivate.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400D360C (KiChargeSchedulingGroupCycleTime.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EDBC (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x140120218 (MmSetAccessLogging.c)
 *     KiScheduleNextForegroundBoost @ 0x14012293C (KiScheduleNextForegroundBoost.c)
 *     KiInitializeUserApc @ 0x140128684 (KiInitializeUserApc.c)
 *     ExQueueDebuggerWorker @ 0x14018CF90 (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x14029B33C (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x14030E570 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F33C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316C50 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140316D50 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1403170D4 (EtwpCovSampLookasidePop.c)
 *     PopCaptureTimeOnProcZero @ 0x140566454 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x14056B040 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FC8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CB874 (EtwpStopLoggerInstance.c)
 *     KdExitDebugger @ 0x140915E88 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
