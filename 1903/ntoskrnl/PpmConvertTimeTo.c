/*
 * XREFs of PpmConvertTimeTo @ 0x1402FFED4
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408AB5F0 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC9D4 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
