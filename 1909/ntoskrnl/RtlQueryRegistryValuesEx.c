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

__int64 __fastcall RtlQueryRegistryValuesEx(unsigned int a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
