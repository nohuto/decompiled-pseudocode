/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1406FEBF0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1406A27A8 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1406FEA24 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(a1 + 32));
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P);
  PipNotifyDeviceDependencyList(a1, 0LL);
  PipNotifyDeviceDependencyList(a1, 1LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
