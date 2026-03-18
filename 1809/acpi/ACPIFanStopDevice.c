/*
 * XREFs of ACPIFanStopDevice @ 0x1C0053904
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C000D298 (ACPIFanLoop.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00304E0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C005A510 (ACPIUnregisterForDeviceNotifications.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 296), Executive, 0, 0, 0LL);
}
