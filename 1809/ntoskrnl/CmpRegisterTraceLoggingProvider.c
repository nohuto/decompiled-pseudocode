/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x140738AF0
 * Callers:
 *     CmInitSystem2 @ 0x1409C72F8 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_140400AA0, 0LL, 0LL);
}
