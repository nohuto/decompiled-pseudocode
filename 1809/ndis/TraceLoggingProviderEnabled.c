/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C001DC04
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0083704 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001DC2C (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( hProvider->LevelPlus1 )
    return TlgKeywordOn(hProvider, 0LL) != 0;
  return v3;
}
