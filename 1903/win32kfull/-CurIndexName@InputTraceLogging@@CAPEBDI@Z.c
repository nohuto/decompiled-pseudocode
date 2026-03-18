/*
 * XREFs of ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01CBFB0
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B834C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01CBFE0 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const char *__fastcall InputTraceLogging::CurIndexName(__int64 a1)
{
  if ( (unsigned int)a1 < 0x13 )
    return `InputTraceLogging::CurIndexName'::`2'::typenames[(unsigned int)a1];
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return "ERROR BAD INDEX";
}
