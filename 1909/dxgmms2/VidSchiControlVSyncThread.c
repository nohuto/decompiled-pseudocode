/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C000FA40
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C007B8A0 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v1; // rbp
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1008);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1008), 1u);
  if ( *(_BYTE *)(a1 + 1728)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1796), 0, 0)
    && !*(_DWORD *)(a1 + 1744)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2584LL)
    && !*(_DWORD *)(a1 + 720)
    && !*(_DWORD *)(a1 + 732)
    && !*(_DWORD *)(a1 + 1748) )
  {
    v3 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
    if ( *(_DWORD *)(a1 + 1800) >= *(_DWORD *)(a1 + 1808) )
    {
      *(_DWORD *)(a1 + 1800) = -1;
      v3 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 )
    {
      VidSchiControlVSync(a1, 0LL, 3LL);
      *(_BYTE *)(a1 + 1756) = 1;
    }
  }
  ExReleaseResourceLite(v1);
  _InterlockedExchange((volatile __int32 *)(a1 + 1792), 0);
}
