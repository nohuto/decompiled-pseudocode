/*
 * XREFs of PpmConvertTime @ 0x1400A7D14
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x1400A6080 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x1400A79B0 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BA40 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmApplyIdlePolicy @ 0x14018B9BC (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402D49D0 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402D5BE0 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1402D5E70 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1402DE260 (PdcPoCurrentPdcPhase.c)
 *     PopCalculateCsSummary @ 0x1402DEB58 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402DEFA8 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402DFDBC (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x1402E31A4 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x1402E3430 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1402E3670 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmInitIdlePolicy @ 0x1409D82DC (PpmInitIdlePolicy.c)
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
