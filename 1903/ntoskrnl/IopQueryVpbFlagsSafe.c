/*
 * XREFs of IopQueryVpbFlagsSafe @ 0x1400B5838
 * Callers:
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopQueryVpbFlagsSafe(__int64 a1)
{
  unsigned __int16 v2; // di
  KIRQL v3; // dl
  __int64 v4; // rax

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v2 = *(_WORD *)(v4 + 4);
  KeReleaseQueuedSpinLock(9uLL, v3);
  return v2;
}
