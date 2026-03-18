/*
 * XREFs of PnpTraceInitialize @ 0x1409AB2EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x140742FD8 (TlgRegisterAggregateProvider.c)
 *     TraceLoggingRegister @ 0x14080798C (TraceLoggingRegister.c)
 */

TLG_STATUS PnpTraceInitialize()
{
  TlgRegisterAggregateProvider(&stru_1403FFBC8);
  TlgRegisterAggregateProvider(&stru_1403FFB90);
  return TraceLoggingRegister(&stru_1403FFB58);
}
