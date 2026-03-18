/*
 * XREFs of DpiMapIommuContiguous @ 0x1C02630D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuContiguousInternal @ 0x1C0049394 (DpiMapIommuContiguousInternal.c)
 */

__int64 __fastcall DpiMapIommuContiguous(__int64 a1, struct _MDL *a2, SIZE_T a3)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  return DpiMapIommuContiguousInternal(IoMmuContextFromDevice, a2, a3);
}
