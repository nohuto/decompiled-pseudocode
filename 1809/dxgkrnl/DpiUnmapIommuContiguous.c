/*
 * XREFs of DpiUnmapIommuContiguous @ 0x1C0263460
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 *     DpiUnmapIommuContiguousInternal @ 0x1C0049704 (DpiUnmapIommuContiguousInternal.c)
 */

void __fastcall DpiUnmapIommuContiguous(__int64 a1, struct _MDL *a2, SIZE_T a3)
{
  __int64 IoMmuContextFromDevice; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  DpiUnmapIommuContiguousInternal(IoMmuContextFromDevice, a2, a3);
}
