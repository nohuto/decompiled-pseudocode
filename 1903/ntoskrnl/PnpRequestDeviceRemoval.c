/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1407315D0
 * Callers:
 *     PiUpdateGuestAssignedState @ 0x140701590 (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x140701670 (PiProcessQueryDeviceState.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PipProcessStartPhase2 @ 0x14071838C (PipProcessStartPhase2.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14086CEC0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x140873E64 (PipDmaGuardBlockAddDevice.c)
 *     PiProcessHaltDevice @ 0x140874FB4 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x140876480 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x14087D23C (PipProcessRestartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14087D310 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x140731324 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140731698 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    LOBYTE(v8) = a2;
    PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    return PnpSetTargetDeviceRemove(*(_QWORD **)(a1 + 32), 1, 1, 0, 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
