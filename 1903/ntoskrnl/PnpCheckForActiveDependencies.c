/*
 * XREFs of PnpCheckForActiveDependencies @ 0x140702C8C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140701670 (PiProcessQueryDeviceState.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x1400EE53C (PipIsDevNodeDNStarted.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140702CE4 (PipCheckForUnsatisfiedDependencies.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned int a2)
{
  char v5; // bl

  if ( PipIsDevNodeDNStarted(a1) )
    return 0;
  PnpAcquireDependencyRelationsLock(0);
  v5 = PipCheckForUnsatisfiedDependencies(a1, a2);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v5;
}
