/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0113AC0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C036740C (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall EnableUserkTraceLogging(__int64 a1, ETWENABLECALLBACK *a2, void *a3)
{
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
}
