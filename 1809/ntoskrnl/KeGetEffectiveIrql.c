/*
 * XREFs of KeGetEffectiveIrql @ 0x1400CAAB0
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x1400CC1D4 (MmCanThreadFault.c)
 *     EtwTelemetryCoverageReport @ 0x14012A560 (EtwTelemetryCoverageReport.c)
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     KdPowerTransitionEx @ 0x14028C100 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x14028E804 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14028E8A0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140294B20 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E3D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14030E570 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x14030F41C (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x14031315C (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1403150A8 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14031560C (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FC8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CB874 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
