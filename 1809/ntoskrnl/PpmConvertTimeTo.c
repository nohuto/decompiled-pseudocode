/*
 * XREFs of PpmConvertTimeTo @ 0x1402E30A4
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x14086EAC8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14086FDDC (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140879C40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7CF4 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
