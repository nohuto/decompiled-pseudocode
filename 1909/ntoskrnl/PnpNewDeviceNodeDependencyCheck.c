/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1407009D0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14066FC88 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140700804 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x140700A38 (PipNotifyDeviceDependencyList.c)
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
