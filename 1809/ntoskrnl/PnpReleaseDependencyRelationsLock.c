/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x140739DC4
 * Callers:
 *     IoResolveDependency @ 0x140181BD0 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x1409C7100 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
