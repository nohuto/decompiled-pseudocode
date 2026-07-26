/*
 * XREFs of ndisSSIdleTimerWorkItem @ 0x1C00B8F50
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisSubmitIdleRequest @ 0x1C00B9E74 (ndisSubmitIdleRequest.c)
 */

void __fastcall ndisSSIdleTimerWorkItem(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // bl
  KIRQL v5; // dl
  KIRQL v6; // al
  KIRQL v7; // bl

  v2 = *(_QWORD *)(a2 + 4448);
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( !*(_DWORD *)(v2 + 508)
    && !*(_DWORD *)(v2 + 512)
    && !*(_DWORD *)(v2 + 516)
    && !*(_DWORD *)(v2 + 528)
    && !*(_DWORD *)(v2 + 532)
    && !*(_DWORD *)(v2 + 520)
    && !*(_DWORD *)(v2 + 524)
    && !*(_DWORD *)(v2 + 576)
    && *(_DWORD *)(v2 + 144) >= 3u
    && (*(_DWORD *)(v2 + 504) & 0x14) == 0 )
  {
    *(_DWORD *)(v2 + 144) = 0;
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  if ( v4 )
    ndisSubmitIdleRequest(a2);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  *(_DWORD *)(v2 + 504) &= ~2u;
  v7 = v6;
  KeSetEvent((PRKEVENT)(v2 + 152), 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  ndisDereferenceMiniport(a2, 0x14u);
}
