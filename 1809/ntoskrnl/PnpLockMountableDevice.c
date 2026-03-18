/*
 * XREFs of PnpLockMountableDevice @ 0x1401699C8
 * Callers:
 *     IopRemoveDevice @ 0x1406ECE24 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14083B230 (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14083F824 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
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
