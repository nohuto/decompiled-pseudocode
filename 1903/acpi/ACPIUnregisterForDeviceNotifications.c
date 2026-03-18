/*
 * XREFs of ACPIUnregisterForDeviceNotifications @ 0x1C005C260
 * Callers:
 *     ACPIFanStopDevice @ 0x1C0055364 (ACPIFanStopDevice.c)
 *     ACPIUnregisterForDeviceNotifications2 @ 0x1C005C2C0 (ACPIUnregisterForDeviceNotifications2.c)
 *     ACPIThermalStopZoneWorker @ 0x1C005FE80 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  __int64 v2; // rbx
  KIRQL v3; // al

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension + 328;
  if ( DeviceExtension != -328 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    KeReleaseSpinLock(&NotifyHandlerLock, v3);
  }
}
