/*
 * XREFs of PnpLockMountableDevice @ 0x14017111C
 * Callers:
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x1408756D4 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14087A960 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PnpLockMountableDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( v1[7] )
        KeWaitForSingleObject(v1 + 35, Executive, 0, 0, 0LL);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = (_QWORD *)v1[3];
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
