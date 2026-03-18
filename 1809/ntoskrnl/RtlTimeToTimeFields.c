/*
 * XREFs of RtlTimeToTimeFields @ 0x14015DA00
 * Callers:
 *     ExpSetSystemTime @ 0x140566AC8 (ExpSetSystemTime.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406E9870 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F5A30 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140734C80 (RtlCutoverTimeToSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14075E830 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x14075FB00 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140763F98 (ExInitializeUtcTimeZoneBias.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x14094CB74 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14015DA14 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
