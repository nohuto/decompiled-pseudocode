/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1406F04AC
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PiProcessQueryDeviceState @ 0x1406EAEE4 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase2 @ 0x1406FE8C4 (PipProcessStartPhase2.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140833710 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x14083A458 (PipDmaGuardBlockAddDevice.c)
 *     PiProcessHaltDevice @ 0x14083B5A0 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x140842A80 (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140842B54 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1406EDFE8 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x1406EFF30 (PnpSetTargetDeviceRemove.c)
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
