/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x1406A7C2C
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1406A79AC (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140659C2C (PfSnPrefetchCacheEntryGet.c)
 */

_QWORD *__fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  _OWORD *v1; // rdi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = (_OWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
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
  ExAcquireResourceExclusiveLite(&stru_140467D60, 1u);
  v8 = qword_140467D50 - 16;
  if ( !memcmp((const void *)(qword_140467D50 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet((__int64)&unk_140467D38, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite(&stru_140467D60);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
