/*
 * XREFs of KeGetEffectiveIrql @ 0x1400C1830
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003ADC (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     EtwpOpenLogger @ 0x14008C5A4 (EtwpOpenLogger.c)
 *     EtwpRequestFlushTimer @ 0x1400B27D8 (EtwpRequestFlushTimer.c)
 *     MmCanThreadFault @ 0x1400BF6DC (MmCanThreadFault.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 *     KdPowerTransitionEx @ 0x1402A2290 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x1402A53E4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1402A5480 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1402AB500 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032C0DC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14032C280 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x14032D1BC (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1403314A8 (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x140333A00 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x140333F60 (EtwpReenableCompression.c)
 *     EtwpStopLoggerInstance @ 0x1406B759C (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CC554 (EtwpSynchronizeWithLogger.c)
 *     EtwInitialize @ 0x14076B184 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
