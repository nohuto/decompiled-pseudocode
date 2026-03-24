/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x140737900
 * Callers:
 *     CmInitSystem2 @ 0x1409C62F8 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140742FD4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_1403FFAA0, 0LL, 0LL);
}
