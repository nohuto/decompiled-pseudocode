/*
 * XREFs of PpmConvertTime @ 0x1400A7C54
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x1400A5FC0 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x1400A78F0 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BAC0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmApplyIdlePolicy @ 0x14018BAFC (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402D4BC0 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402D5DD0 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1402D6060 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402DFFAC (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x1402E3394 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x1402E3620 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1402E3860 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmInitIdlePolicy @ 0x1409D92DC (PpmInitIdlePolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( is_mul_ok(a1, a3) )
      return a1 * (unsigned __int128)a3 / a2;
    else
      return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  }
  return v3;
}
