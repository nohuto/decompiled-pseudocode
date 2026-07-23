/*
 * XREFs of NtQueryValueKey @ 0x18009D170
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryRegistryValues @ 0x180003474 (RtlpQueryRegistryValues.c)
 *     EtwpGetRegDwordValue @ 0x180003EB8 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800041A8 (EtwpQueryRegString.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18000434C (EtwpGetCpuSpeedFromRegistry.c)
 *     LdrpQueryValueKey @ 0x1800090D4 (LdrpQueryValueKey.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     QueryRegistryValue @ 0x18005BF80 (QueryRegistryValue.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18006C460 (RtlpLookupCurDirSetting.c)
 *     RtlGetPersistedStateLocation @ 0x18006FF10 (RtlGetPersistedStateLocation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180073914 (RtlpProcessIFEOKeyFilter.c)
 *     ReadUlongFromKey @ 0x180075408 (ReadUlongFromKey.c)
 *     RtlQueryImageFileKeyOption @ 0x180079F00 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     RtlpNtQueryValueKey @ 0x18007B3B0 (RtlpNtQueryValueKey.c)
 *     RtlpTestHookInitialize @ 0x18007CA10 (RtlpTestHookInitialize.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x180088558 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlInitializeRXact @ 0x18008AAC0 (RtlInitializeRXact.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CC040 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CC3D0 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D16A0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4C10 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DD680 (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DDFF0 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF1D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E1EE8 (RtlpQueryEafPlusModuleList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EB0B8 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EB430 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0DB8 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x1800F6FF4 (RtlpGetUserLocaleName.c)
 *     RtlpIsCustomLocale @ 0x1800F70D4 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800FB7F0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FB930 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180100208 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x18010A458 (RtlpHpApplySegmentHeapConfigurations.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1801160B8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
