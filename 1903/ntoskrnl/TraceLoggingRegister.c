/*
 * XREFs of TraceLoggingRegister @ 0x140841210
 * Callers:
 *     PnpTraceInitialize @ 0x1409ED51C (PnpTraceInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
