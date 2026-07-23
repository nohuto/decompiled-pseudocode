/*
 * XREFs of TraceLoggingRegister @ 0x140808B6C
 * Callers:
 *     sub_14073CFE0 @ 0x14073CFE0 (sub_14073CFE0.c)
 *     PnpTraceInitialize @ 0x1409AC2EC (PnpTraceInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
