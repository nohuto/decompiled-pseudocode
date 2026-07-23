/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x1406672E0
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140667058 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406692F8 (PfSnPrefetchCacheEntryGet.c)
 */

_QWORD *__fastcall PfSnPrefetchCacheEntryUpdate(_DWORD *a1)
{
  const void *v1; // rsi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = a1 + 1;
  v3 = (unsigned __int8 *)(a1 + 1);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_14043D360, 1u);
  v8 = qword_14043D350 - 16;
  if ( !memcmp((const void *)(qword_14043D350 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_14043D338, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = a1[17];
    *(_DWORD *)(v8 + 116) = a1[18];
  }
  ExReleaseResourceLite(&stru_14043D360);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
