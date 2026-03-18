/*
 * XREFs of PpmConvertTime @ 0x1400A7CF4
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x1400A6060 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x1400A7990 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14010BA20 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmApplyIdlePolicy @ 0x14018B99C (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402D48D0 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402D5AE0 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1402D5D70 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1402DE160 (PdcPoCurrentPdcPhase.c)
 *     PopCalculateCsSummary @ 0x1402DEA58 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402DEEA8 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402DFCBC (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x1402E30A4 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x1402E3330 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1402E3570 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
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
