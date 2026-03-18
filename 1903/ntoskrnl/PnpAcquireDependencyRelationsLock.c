/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406A2C00
 * Callers:
 *     IoResolveDependency @ 0x140192810 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A25E4 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406FEBF0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406FECC8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpCheckForActiveDependencies @ 0x140702C8C (PnpCheckForActiveDependencies.c)
 *     IopSortRelationListForRemove @ 0x14072ED9C (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14072F35C (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x1407315D0 (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x1407373A0 (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14085DD10 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14085DE20 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14085DEC0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1409F7D34 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
