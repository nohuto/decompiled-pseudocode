/*
 * XREFs of IoInitializeLiveDump @ 0x14019385C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx(&stru_140401A78, 0LL, 0LL);
}
