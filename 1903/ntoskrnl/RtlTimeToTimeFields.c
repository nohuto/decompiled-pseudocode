/*
 * XREFs of RtlTimeToTimeFields @ 0x140144D30
 * Callers:
 *     ExpSetSystemTime @ 0x140596560 (ExpSetSystemTime.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FCB88 (PiDevCfgBuildDriverConfigurationId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140701A0C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14075FF8C (RtlCutoverTimeToSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140785958 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407870D0 (ExpKernelExpirationDateCacheProvider.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x14098CB80 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140144D44 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
