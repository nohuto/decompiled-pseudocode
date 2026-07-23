/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406E9590
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140138760 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14018D95C (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140190480 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x140190750 (EtwpReadPerSiloConfigParameters.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409F467C (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140A1572C (EtwpReadConfigParameters.c)
 *     SmQueryRegistry @ 0x140A19F70 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x140A1DA3C (CmIsLastKnownGoodBoot.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
