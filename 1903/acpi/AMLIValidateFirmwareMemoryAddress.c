/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0063354
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00B11FC (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0028E58 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(const void **a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
