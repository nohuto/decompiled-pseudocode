/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1406EC858
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EF3D4 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140842A80 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1406EC890 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
