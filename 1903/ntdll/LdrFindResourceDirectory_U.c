/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800E0040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return sub_180018D8C(DllHandle, (__int64)ResourceInfo, Level, 2u, (__int64)ResourceDirectory);
}
