/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1406EF22C
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C64 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase2 @ 0x1406FD644 (PipProcessStartPhase2.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408324D0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x140839218 (PipDmaGuardBlockAddDevice.c)
 *     PiProcessHaltDevice @ 0x14083A360 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x14083B374 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x140841840 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140841914 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059D8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406ECD68 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x1406EECB0 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    PnpRequestDeviceRemovalWorker(a1, a1, a2, 2, 0);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    return PnpSetTargetDeviceRemove(*(_QWORD **)(a1 + 32), 1, 1, 0, 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
