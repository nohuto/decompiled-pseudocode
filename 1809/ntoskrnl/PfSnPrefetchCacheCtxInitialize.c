/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x140752E4C
 * Callers:
 *     PfSnInitializePrefetcher @ 0x1409D48C4 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(_QWORD *a1)
{
  memset(a1, 0, 0x90uLL);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  a1[4] = 0LL;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 5));
}
