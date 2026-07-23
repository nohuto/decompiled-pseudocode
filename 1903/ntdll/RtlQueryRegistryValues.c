/*
 * XREFs of RtlQueryRegistryValues @ 0x1800EB490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return sub_180003474(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context, Environment, 0);
}
