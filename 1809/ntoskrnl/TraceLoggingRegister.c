/*
 * XREFs of TraceLoggingRegister @ 0x14080798C
 * Callers:
 *     sub_14073BE10 @ 0x14073BE10 (sub_14073BE10.c)
 *     PnpTraceInitialize @ 0x1409AB2EC (PnpTraceInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
