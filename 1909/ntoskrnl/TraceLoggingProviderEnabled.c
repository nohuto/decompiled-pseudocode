/*
 * XREFs of TraceLoggingProviderEnabled @ 0x14008B944
 * Callers:
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140637AD4 (EtwpWriteAppStateChangeSummary.c)
 *     EtwTraceProcess @ 0x1406838A0 (EtwTraceProcess.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406F010C (CmpLogTransactionAbortedWithChildName.c)
 *     PopNotifyTelemetryOsState @ 0x140727CF4 (PopNotifyTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x14072FAA0 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x14075F968 (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140873AF4 (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x140873F68 (PnpTraceRebalanceResult.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9
  BOOLEAN v4; // al

  v3 = 0;
  if ( eventLevel < hProvider->LevelPlus1 )
  {
    v4 = TlgKeywordOn(hProvider, eventKeyword);
    if ( v4 != v3 )
      return 1;
  }
  return v3;
}
