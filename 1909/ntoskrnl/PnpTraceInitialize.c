/*
 * XREFs of PnpTraceInitialize @ 0x1409ED51C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x14074F584 (TlgRegisterAggregateProvider.c)
 *     TraceLoggingRegister @ 0x140840870 (TraceLoggingRegister.c)
 */

TLG_STATUS PnpTraceInitialize()
{
  TlgRegisterAggregateProvider(&stru_140425D20);
  TlgRegisterAggregateProvider(&stru_140425CE8);
  return TraceLoggingRegister(&stru_140425CB0);
}
