/*
 * XREFs of Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001AAD4
 * Callers:
 *     ESM_ResettingControllerDueToRepeatedStopEndpointFailure @ 0x1C0046410 (ESM_ResettingControllerDueToRepeatedStopEndpointFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure(__int64 *a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(a1[10], 1u, 0xDu, 0x76u, (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids, a1[3]);
  Controller_HwVerifierBreakIfEnabled(
    (_QWORD *)*a1,
    a1[1],
    a1[3],
    1024LL,
    "Stop Endpoint command repeatedly failed with context state error",
    0LL,
    0LL);
  Controller_ReportFatalError(*a1, 2, 4100, a1[2], (__int64)a1, 0LL);
}
