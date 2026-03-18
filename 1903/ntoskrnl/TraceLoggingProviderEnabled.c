/*
 * XREFs of TraceLoggingProviderEnabled @ 0x14008A644
 * Callers:
 *     EtwTraceAppStateChange @ 0x140634190 (EtwTraceAppStateChange.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     EtwTraceProcess @ 0x140690330 (EtwTraceProcess.c)
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EE5BC (CmpLogTransactionAbortedWithChildName.c)
 *     PopNotifyTelemetryOsState @ 0x140725E54 (PopNotifyTelemetryOsState.c)
 *     EtwpCoverageProvEnableCallback @ 0x14072DBD0 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x14075B0D8 (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x1408743F4 (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x140874868 (PnpTraceRebalanceResult.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
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
