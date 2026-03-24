/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1400129D8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1400E651C (MiAllocateContiguousMemory.c)
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B2694 (EtwpWriteAppStateChangeSummary.c)
 *     EtwTraceAppStateChange @ 0x1405B2C80 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14066C528 (EtwTraceProcess.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406CF668 (CmpLogTransactionAbortedWithChildName.c)
 *     EtwpCoverageProvEnableCallback @ 0x1406D05E0 (EtwpCoverageProvEnableCallback.c)
 *     PopNotifyTelemetryOsState @ 0x1406DE7F8 (PopNotifyTelemetryOsState.c)
 *     PopTransitionTelemetryOsState @ 0x1407454C8 (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140839778 (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x140839D08 (PnpTraceRebalanceResult.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
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
