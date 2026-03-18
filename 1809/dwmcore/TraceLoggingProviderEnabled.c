/*
 * XREFs of TraceLoggingProviderEnabled @ 0x18002C0A0
 * Callers:
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18002BF04 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007866C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingActivity@$1?g_hDwmInteractionProvider@@3QEBU_TlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x18014FF5C (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingActivity@$1-g_hDwmInteractionProvider@@3QEBU_T.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18019EEF8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801A2DCC (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180222134 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
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
