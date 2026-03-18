/*
 * XREFs of KeGetEffectiveIrql @ 0x1400A16B0
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003B60 (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmCanThreadFault @ 0x14009F55C (MmCanThreadFault.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     EtwpOpenLogger @ 0x1400C8C44 (EtwpOpenLogger.c)
 *     EtwpRequestFlushTimer @ 0x1400E28C0 (EtwpRequestFlushTimer.c)
 *     EtwTelemetryCoverageReport @ 0x14015CE30 (EtwTelemetryCoverageReport.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     KdPowerTransitionEx @ 0x1402A1FF0 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x1402A5144 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1402A51E0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1402AB260 (KeTryToInsertQueueApc.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032BB2C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14032BCD0 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x14032CC1C (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x140330F08 (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x140333460 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1403339C0 (EtwpReenableCompression.c)
 *     EtwpStopLoggerInstance @ 0x1406ACBBC (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x1406CB384 (EtwpSynchronizeWithLogger.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
