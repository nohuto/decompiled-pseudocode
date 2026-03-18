/*
 * XREFs of FsRtlNotifySetCancelRoutine @ 0x140119A24
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C1170 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C1B14 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C1D20 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 */

char __fastcall FsRtlNotifySetCancelRoutine(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v6; // rbx
  KIRQL v7; // dl

  v3 = 0;
  *(_BYTE *)(a1 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( a2 )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
    v7 = *(_BYTE *)(a1 + 69);
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v7);
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 68) )
  {
    FsRtlCancelNotify(0LL, a1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)FsRtlCancelNotify);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  }
  return v3;
}
