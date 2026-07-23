/*
 * XREFs of LdrAccessResource @ 0x140757D20
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1409D8120 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x14067CEA8 (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData(
           (unsigned __int64)BaseAddress,
           &ResourceDataEntry->OffsetToData,
           (unsigned __int64 *)Resource,
           Size);
}
