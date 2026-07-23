/*
 * XREFs of LdrFindResource_U @ 0x140757D40
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1409D8120 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x14067C0B0 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall LdrFindResource_U(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)BaseAddress,
           (__int64 *)ResourceInfo,
           Level,
           0,
           (__int64 *)ResourceDataEntry);
}
