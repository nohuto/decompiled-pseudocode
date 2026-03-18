/*
 * XREFs of RtlTimeToTimeFields @ 0x1401453D0
 * Callers:
 *     ExpSetSystemTime @ 0x1405968F8 (ExpSetSystemTime.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FE968 (PiDevCfgBuildDriverConfigurationId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407037EC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140764994 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140787CB8 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x140789430 (ExpKernelExpirationDateCacheProvider.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x14098CB80 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x1401453E4 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
