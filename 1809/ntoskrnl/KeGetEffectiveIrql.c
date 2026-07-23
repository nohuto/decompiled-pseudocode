/*
 * XREFs of KeGetEffectiveIrql @ 0x1400CABB0
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x1400CC2D4 (MmCanThreadFault.c)
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     KdPowerTransitionEx @ 0x14028C3F0 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x14028EAF4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14028EB90 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140294E10 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E6C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14030E860 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x14030F70C (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x140315398 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1403158FC (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C4248 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CCAF4 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
