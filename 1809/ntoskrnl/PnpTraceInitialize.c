/*
 * XREFs of PnpTraceInitialize @ 0x1409AC2EC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x1407441A8 (TlgRegisterAggregateProvider.c)
 *     TraceLoggingRegister @ 0x140808B6C (TraceLoggingRegister.c)
 */

TLG_STATUS PnpTraceInitialize()
{
  TlgRegisterAggregateProvider(&stru_140400BC8);
  TlgRegisterAggregateProvider(&stru_140400B90);
  return TraceLoggingRegister(&stru_140400B58);
}
