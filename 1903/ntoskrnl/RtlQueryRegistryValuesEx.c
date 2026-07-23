/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406E84F0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140138110 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14018D0DC (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14018F580 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x14018F850 (EtwpReadPerSiloConfigParameters.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409F476C (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140A1554C (EtwpReadConfigParameters.c)
 *     SmQueryRegistry @ 0x140A19DE0 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x140A1D860 (CmIsLastKnownGoodBoot.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
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
