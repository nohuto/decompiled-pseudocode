/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C000BF00
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0095168 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AE518 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AEDA0 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00B1480 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00B14C0 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
}
