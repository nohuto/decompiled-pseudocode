/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14073AFB4
 * Callers:
 *     IoResolveDependency @ 0x140181D10 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x1409C8100 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
