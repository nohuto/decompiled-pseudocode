/*
 * XREFs of TlgRegisterAggregateProvider @ 0x140742FD8
 * Callers:
 *     PnpTraceInitialize @ 0x1409AB2EC (PnpTraceInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140742FF4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(const struct _TlgProvider_t *a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
