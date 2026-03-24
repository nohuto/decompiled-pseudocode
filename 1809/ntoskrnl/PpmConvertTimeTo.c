/*
 * XREFs of PpmConvertTimeTo @ 0x1402E31A4
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x14086EAA8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14086FDBC (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C20 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7D14 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
