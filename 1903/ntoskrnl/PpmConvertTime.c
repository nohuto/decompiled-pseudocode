/*
 * XREFs of PpmConvertTime @ 0x140004E24
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x14000467C (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140004AC0 (PopGetIdleTimesCallback.c)
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     PpmSnapPerformanceAccumulation @ 0x140035500 (PpmSnapPerformanceAccumulation.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035810 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 *     PpmApplyIdlePolicy @ 0x1401951A4 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402EF07C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402F02B4 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1402F0544 (PpmTraceExitLatency.c)
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 *     PopCalculateCsSummary @ 0x1402FBA70 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402FBFA8 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1402FCE94 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x1402FFED4 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x1402FFFD0 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1403001A0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1403003E0 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmHvEnableQosEnlightenment @ 0x14077369C (PpmHvEnableQosEnlightenment.c)
 *     PopConfigureHeteroPolicies @ 0x140773F08 (PopConfigureHeteroPolicies.c)
 *     PpmInitIdlePolicy @ 0x140A1B618 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A1D0D0 (PopInitDripsWakeAccounting.c)
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
