/*
 * XREFs of LdrFindResourceEx_U @ 0x1408CF160
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1406C5CD0 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)DllHandle,
           (__int64 *)ResourceInfo,
           Level,
           Flags,
           (unsigned int **)ResourceDataEntry);
}
