/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1406FECC8
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x1407302F4 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14087D23C (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1406FED00 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
