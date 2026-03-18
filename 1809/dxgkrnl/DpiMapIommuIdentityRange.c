/*
 * XREFs of DpiMapIommuIdentityRange @ 0x1C0263110
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuIdentityRangeInternal @ 0x1C00494E8 (DpiMapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiMapIommuIdentityRange(__int64 a1, __int64 a2)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiMapIommuIdentityRangeInternal(IoMmuContextFromDevice, a2);
}
