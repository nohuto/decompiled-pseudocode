/*
 * XREFs of DpiUnmapIommuIdentityRange @ 0x1C02634A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0049804 (DpiUnmapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRange(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiUnmapIommuIdentityRangeInternal(IoMmuContextFromDevice);
}
