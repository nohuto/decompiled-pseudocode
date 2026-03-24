/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1406EB5B8
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406EAB18 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EE134 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140841820 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059D8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1406EB5F0 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
