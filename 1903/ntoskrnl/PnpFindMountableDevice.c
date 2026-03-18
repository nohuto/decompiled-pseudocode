/*
 * XREFs of PnpFindMountableDevice @ 0x140172E2C
 * Callers:
 *     IopRemoveDevice @ 0x1407308C4 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140875FD4 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14087B260 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
