/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C00613D4
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00ADA68 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C00296A8 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2, a3, a4);
}
