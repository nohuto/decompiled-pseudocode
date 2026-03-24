/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14059D8F4
 * Callers:
 *     IoResolveDependency @ 0x140181BD0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14059F218 (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1406E6B80 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406EB5B8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EB72C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406EB7A0 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406EB810 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpProcessDependencyRelations @ 0x1406EC890 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406ED428 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     IopSortRelationListForRemove @ 0x1406EF0FC (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x1406EF20C (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD1C (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x1408238C0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1408239F0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140823A80 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
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
