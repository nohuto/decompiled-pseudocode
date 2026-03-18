/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406C7660
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140135E10 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140180F1C (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185D14 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x140185FD8 (EtwpReadPerSiloConfigParameters.c)
 *     QueryFeatureOverride @ 0x1401B3794 (QueryFeatureOverride.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409C1174 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x1409D01B0 (EtwpReadConfigParameters.c)
 *     SmQueryRegistry @ 0x1409D6D40 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1409DAD24 (CmIsLastKnownGoodBoot.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
