/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14075BAAC
 * Callers:
 *     CmInitSystem2 @ 0x1409FCE90 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_140425BC0, 0LL, 0LL);
}
