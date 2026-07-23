/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1407441A8
 * Callers:
 *     PnpTraceInitialize @ 0x1409AC2EC (PnpTraceInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1407441C4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(const struct _TlgProvider_t *a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
