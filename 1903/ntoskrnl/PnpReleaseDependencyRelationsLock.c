/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x1406A27A8
 * Callers:
 *     IoResolveDependency @ 0x140192810 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A25E4 (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406FEBF0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x14085DD10 (IoDuplicateDependency.c)
 *     PiDeviceDependencyInit @ 0x1409F7D34 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 */

__int64 PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  return PpDevNodeUnlockTree(0LL);
}
