/*
 * XREFs of TraceLoggingRegister @ 0x14080796C
 * Callers:
 *     sub_14073BDF0 @ 0x14073BDF0 (sub_14073BDF0.c)
 *     PnpTraceInitialize @ 0x1409AB2EC (PnpTraceInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x14071DC38 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
