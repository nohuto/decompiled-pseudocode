/*
 * XREFs of IsPciBus @ 0x1C0096BA0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010840 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C009A45C (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 712));
}
