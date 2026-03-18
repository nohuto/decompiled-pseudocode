/*
 * XREFs of PpmConvertTime @ 0x140004EB4
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x14000470C (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140004B50 (PopGetIdleTimesCallback.c)
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400358F0 (PpmSnapPerformanceAccumulation.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035C00 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x14009C480 (PpmPerfAction.c)
 *     PpmApplyIdlePolicy @ 0x140195984 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402EEDDC (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402F0014 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1402F02A4 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 *     PopCalculateCsSummary @ 0x1402FB520 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402FBA58 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402FC944 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x1402FF984 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x1402FFA80 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1402FFC50 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1402FFE90 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmHvEnableQosEnlightenment @ 0x140776C7C (PpmHvEnableQosEnlightenment.c)
 *     PopConfigureHeteroPolicies @ 0x1407774E8 (PopConfigureHeteroPolicies.c)
 *     PpmInitIdlePolicy @ 0x140A1B890 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A1D2AC (PopInitDripsWakeAccounting.c)
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
