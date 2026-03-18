/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14059D8F4
 * Callers:
 *     IoResolveDependency @ 0x140181BB0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14059F218 (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1406E6BA0 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406EB5D8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EB74C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7C0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB830 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpProcessDependencyRelations @ 0x1406EC8B0 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406ED448 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8CC (PnpQueuePendingSurpriseRemoval.c)
 *     IopSortRelationListForRemove @ 0x1406EF11C (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x1406EF22C (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD3C (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x1408238E0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140823A10 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140823AA0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1409C7100 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
