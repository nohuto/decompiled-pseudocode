/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1407574C4
 * Callers:
 *     CmInitSystem2 @ 0x1409FC974 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14074EB10 (TlgRegisterAggregateProviderEx.c)
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_140425BC0, 0LL, 0LL);
}
