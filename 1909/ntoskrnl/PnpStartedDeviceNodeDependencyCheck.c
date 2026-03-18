/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x140700AA8
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x140732554 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14087C93C (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406700E0 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x140700AE0 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
