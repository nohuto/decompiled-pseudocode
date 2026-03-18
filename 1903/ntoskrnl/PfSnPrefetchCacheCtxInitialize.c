/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1407785B0
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140A19044 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x90uLL);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 40));
}
