/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180003450
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return sub_180003474(RelativeTo, Path, QueryTable, Context, Environment, v6);
}
