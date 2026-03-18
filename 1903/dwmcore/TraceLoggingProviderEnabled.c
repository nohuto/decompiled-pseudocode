/*
 * XREFs of TraceLoggingProviderEnabled @ 0x180086B28
 * Callers:
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18008699C (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800D60B4 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x180191950 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801D9B70 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801DDC94 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180222268 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( (unsigned int)eventLevel < *(_DWORD *)hProvider )
    return TlgKeywordOn(hProvider, eventKeyword) != 0;
  return v3;
}
