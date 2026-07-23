/*
 * XREFs of NtQueryValueKey @ 0x1800A05E0
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     QueryRegistryValue @ 0x180032F5C (QueryRegistryValue.c)
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     LdrpQueryValueKey @ 0x18004C2EC (LdrpQueryValueKey.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800523FC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x1800524E4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800527DC (EtwpQueryRegString.c)
 *     RtlpQueryRegistryValues @ 0x180053704 (RtlpQueryRegistryValues.c)
 *     RtlpLookupCurDirSetting @ 0x180058040 (RtlpLookupCurDirSetting.c)
 *     WerpGlobalFlagsForProcess @ 0x18006D8F0 (WerpGlobalFlagsForProcess.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007949C (RtlpProcessIFEOKeyFilter.c)
 *     ReadUlongFromKey @ 0x18007ABA4 (ReadUlongFromKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECD0 (RtlQueryImageFileKeyOption.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC18 (LdrpCodeAuthzInitialize.c)
 *     RtlpNtQueryValueKey @ 0x180080590 (RtlpNtQueryValueKey.c)
 *     RtlpTestHookInitialize @ 0x180080F10 (RtlpTestHookInitialize.c)
 *     RtlpIsCustomLocale @ 0x18008A4EC (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008AEC0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlInitializeRXact @ 0x18008DDB0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CDB60 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D2FD0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6D84 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DFA10 (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E0668 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E1550 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E2FB0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E38F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E4B68 (RtlpQueryEafPlusModuleList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EDEE4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE2B0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F3A14 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x1800F93C4 (RtlpGetUserLocaleName.c)
 *     RtlOsDeploymentState @ 0x1800FE320 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FE460 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180102A28 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x18010C22C (RtlpHpApplySegmentHeapConfigurations.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180116C24 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
