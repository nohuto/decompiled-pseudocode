/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C00114A0
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0096A84 (ACPIQueryDeviceBiosName.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AAE50 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AB6C0 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C00ADC80 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C00ADCC0 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
}
