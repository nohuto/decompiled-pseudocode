/*
 * XREFs of KeGetEffectiveIrql @ 0x1400CAAD0
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x1400CC1F4 (MmCanThreadFault.c)
 *     EtwTelemetryCoverageReport @ 0x14012A580 (EtwTelemetryCoverageReport.c)
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     KdPowerTransitionEx @ 0x14028C200 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x14028E904 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14028E9A0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140294C20 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E4D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14030E670 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x14030F51C (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x14031325C (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1403151A8 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x14031570C (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C2FA8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406CB854 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CAD04 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
