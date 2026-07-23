/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x14059E8F4
 * Callers:
 *     IoResolveDependency @ 0x140181D10 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1405A0218 (PnpDeleteAllDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1406E7E20 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1406EC858 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EC9CC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1406ECA40 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406ECAB0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpProcessDependencyRelations @ 0x1406EDB30 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406EE6C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 *     IopSortRelationListForRemove @ 0x1406F039C (IopSortRelationListForRemove.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x14070CFBC (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140824AC0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140824BF0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140824C80 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1409C8100 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
