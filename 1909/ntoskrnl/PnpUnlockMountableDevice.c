/*
 * XREFs of PnpUnlockMountableDevice @ 0x140171178
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x1408756D4 (PiIrpQueryRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x14087A538 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14087C87C (PipProcessRestartPhase1.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
