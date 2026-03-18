/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x180191950
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001DA78 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018F55C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180086B28 (TraceLoggingProviderEnabled.c)
 */

ULONG __fastcall _TlgActivityBase<TraceLoggingActivity<&_TlgProvider_t const * const g_hDwmInteractionProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        __int64 a1)
{
  ULONG result; // eax

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 5u, 0LL) )
  {
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  }
  else
  {
    result = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 1;
  return result;
}
