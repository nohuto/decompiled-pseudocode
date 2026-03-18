/*
 * XREFs of LdrAccessResource @ 0x14077D0F0
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A1A1E0 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1406C599C (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData((unsigned __int64)BaseAddress, (unsigned __int64)ResourceDataEntry);
}
