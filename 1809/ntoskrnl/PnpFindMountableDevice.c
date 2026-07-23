/*
 * XREFs of PnpFindMountableDevice @ 0x14015AA14
 * Callers:
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14083C470 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140840A64 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
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
