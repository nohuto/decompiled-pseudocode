/*
 * XREFs of IoInitializeLiveDump @ 0x14019371C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x14071DC38 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx(&stru_140400A78, 0LL, 0LL);
}
