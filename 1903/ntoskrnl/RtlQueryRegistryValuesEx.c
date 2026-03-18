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

__int64 __fastcall RtlQueryRegistryValuesEx(unsigned int a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
