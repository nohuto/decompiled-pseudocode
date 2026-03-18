/*
 * XREFs of ACPIDispatchIrpDepFilterQueryID @ 0x1C002B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000EE90 (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C002B800 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildFlushQueue @ 0x1C0096E18 (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDispatchIrpDepFilterQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // al

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  *(_QWORD *)(DeviceExtension + 24) = AcpiFilterIrpDispatch;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL) + 152LL))(
           a1,
           a2);
}
