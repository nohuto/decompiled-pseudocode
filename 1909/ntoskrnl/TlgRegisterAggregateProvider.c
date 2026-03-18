/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14074F584
 * Callers:
 *     PnpTraceInitialize @ 0x1409ED51C (PnpTraceInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(const struct _TlgProvider_t *a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
