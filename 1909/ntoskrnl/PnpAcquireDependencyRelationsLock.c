/*
 * XREFs of PnpAcquireDependencyRelationsLock @ 0x1406700E0
 * Callers:
 *     IoResolveDependency @ 0x140192FF0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14066FAC4 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1407008C0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1407009D0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x140700A38 (PipNotifyDeviceDependencyList.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140700AA8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpCheckForActiveDependencies @ 0x140704A6C (PnpCheckForActiveDependencies.c)
 *     IopSortRelationListForRemove @ 0x140730FFC (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x1407315BC (PnpProcessDependencyRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731CAC (PnpQueuePendingSurpriseRemoval.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PiQueryPowerDependencyRelations @ 0x140739600 (PiQueryPowerDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14085D520 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14085D5C0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
 *     PiDeviceDependencyInit @ 0x1409F7C44 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 */

BOOLEAN __fastcall PnpAcquireDependencyRelationsLock(char a1)
{
  PpDevNodeLockTree(0LL);
  if ( a1 )
    return ExAcquireResourceExclusiveLite(&PiDependencyRelationsLock, 1u);
  else
    return ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
}
