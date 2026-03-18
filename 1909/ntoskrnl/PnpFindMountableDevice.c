/*
 * XREFs of PnpFindMountableDevice @ 0x14017355C
 * Callers:
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x1408756D4 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14087A960 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
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
