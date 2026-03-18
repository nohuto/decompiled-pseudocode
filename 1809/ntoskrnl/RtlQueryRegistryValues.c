/*
 * XREFs of RtlQueryRegistryValues @ 0x1406C4A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
