/*
 * XREFs of KeInsertQueueDpc @ 0x140062190
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     PopQueueTargetDpc @ 0x1400A5FC0 (PopQueueTargetDpc.c)
 *     IopAllocateIrpPrivate @ 0x1400B9310 (IopAllocateIrpPrivate.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400D362C (KiChargeSchedulingGroupCycleTime.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EDDC (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x140120238 (MmSetAccessLogging.c)
 *     KiScheduleNextForegroundBoost @ 0x14012295C (KiScheduleNextForegroundBoost.c)
 *     KiInitializeUserApc @ 0x1401286A4 (KiInitializeUserApc.c)
 *     ExQueueDebuggerWorker @ 0x14018CFB0 (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x14029B43C (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x14030E670 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F43C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316D50 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140316E50 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1403171D4 (EtwpCovSampLookasidePop.c)
 *     PopCaptureTimeOnProcZero @ 0x140566454 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x14056B040 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919C0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FA8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CB854 (EtwpStopLoggerInstance.c)
 *     KdExitDebugger @ 0x140915E88 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
