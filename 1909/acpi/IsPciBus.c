/*
 * XREFs of IsPciBus @ 0x1C00939A8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0011E50 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D150 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004D790 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C009D2C0 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 712));
}
