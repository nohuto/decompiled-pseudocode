/*
 * XREFs of LdrFindResource_U @ 0x14077D110
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A1A1E0 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1406C5CD0 (LdrpSearchResourceSection_U.c)
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
           (unsigned int **)ResourceDataEntry);
}
