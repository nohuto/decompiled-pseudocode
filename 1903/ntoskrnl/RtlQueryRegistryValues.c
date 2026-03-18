/*
 * XREFs of RtlQueryRegistryValues @ 0x1406E6E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
