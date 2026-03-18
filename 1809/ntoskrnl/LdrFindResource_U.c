/*
 * XREFs of LdrFindResource_U @ 0x140756B70
 * Callers:
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1409D7120 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x14067AF10 (LdrpSearchResourceSection_U.c)
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
