/*
 * XREFs of IoInitializeLiveDump @ 0x14019E40C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx(&stru_140425C78, 0LL, 0LL);
}
