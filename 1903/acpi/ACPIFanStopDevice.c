/*
 * XREFs of ACPIFanStopDevice @ 0x1C0055364
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D150 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004D790 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AD9E0 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C0007938 (ACPIFanLoop.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00311A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C005C260 (ACPIUnregisterForDeviceNotifications.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
}
