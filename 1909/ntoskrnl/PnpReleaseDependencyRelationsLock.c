/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14066FC88
 * Callers:
 *     IoResolveDependency @ 0x140192FF0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14066FAC4 (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1407009D0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731CAC (PnpQueuePendingSurpriseRemoval.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 *     PiDeviceDependencyInit @ 0x1409F7C44 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 */

__int64 PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  return PpDevNodeUnlockTree(0LL);
}
