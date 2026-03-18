/*
 * XREFs of IoInitializeLiveDump @ 0x14019DCEC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx(&stru_140425C78, 0LL, 0LL);
}
