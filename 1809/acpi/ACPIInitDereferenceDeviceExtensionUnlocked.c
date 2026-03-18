/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017D68
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpSetPower @ 0x1C002C6B0 (ACPIFilterIrpSetPower.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIDockIntfDereference @ 0x1C0048BC0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0048D70 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A010 (ACPIBuildMissingEjectionRelations.c)
 *     AcpiDeviceResetDereference @ 0x1C0050A60 (AcpiDeviceResetDereference.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C0056BC0 (OSNotifyCreateOperationRegionWorker.c)
 *     DispatchNotificationWorker @ 0x1C005A590 (DispatchNotificationWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C005CC10 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C00AA4F0 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C00ACF68 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C001952C (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}
