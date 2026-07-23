/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406C88E0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140135F00 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14018107C (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185E74 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x140186138 (EtwpReadPerSiloConfigParameters.c)
 *     QueryFeatureOverride @ 0x1401B4090 (QueryFeatureOverride.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409C2174 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x1409D11B0 (EtwpReadConfigParameters.c)
 *     SmQueryRegistry @ 0x1409D7D40 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1409DBD24 (CmIsLastKnownGoodBoot.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context);
}
