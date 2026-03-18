/*
 * XREFs of LdrAccessResource @ 0x14077FA10
 * Callers:
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A1A370 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x14067540C (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData((unsigned __int64)BaseAddress, (unsigned __int64)ResourceDataEntry);
}
