/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x1406EB74C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140596E08 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059D8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7C0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB830 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1406EB940 (PipAddtoRebuildPowerRelationsQueue.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(a1 + 32));
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P);
  PipNotifyDeviceDependencyList(a1, 0LL);
  PipNotifyDeviceDependencyList(a1, 1LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
