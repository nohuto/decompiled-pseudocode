/*
 * XREFs of IoInitializeLiveDump @ 0x1401936FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x14071DC58 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx(&stru_140400A78, 0LL, 0LL);
}
