/*
 * XREFs of PpmConvertTimeTo @ 0x1402FF984
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AAE50 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC234 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
