/*
 * XREFs of KeInsertQueueDpc @ 0x140062190
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     PopQueueTargetDpc @ 0x1400A5F00 (PopQueueTargetDpc.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400D36AC (KiChargeSchedulingGroupCycleTime.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x1401202A8 (MmSetAccessLogging.c)
 *     KiScheduleNextForegroundBoost @ 0x140122A2C (KiScheduleNextForegroundBoost.c)
 *     KiInitializeUserApc @ 0x140128774 (KiInitializeUserApc.c)
 *     ExQueueDebuggerWorker @ 0x14018D0F0 (ExQueueDebuggerWorker.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x14030E860 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F62C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316F40 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140317040 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1403173C4 (EtwpCovSampLookasidePop.c)
 *     PopCaptureTimeOnProcZero @ 0x140567454 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x14056C040 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     IopLiveDumpCorralProcessors @ 0x140579704 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057B720 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C4248 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
