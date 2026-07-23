/*
 * XREFs of NtOpenKey @ 0x18009D0D0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryRegistryValues @ 0x180003474 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     EtwpGetRegDwordValue @ 0x180003EB8 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800041A8 (EtwpQueryRegString.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x18000434C (EtwpGetCpuSpeedFromRegistry.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800085C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x180008A20 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180008C14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     GetOverlayRootFolder @ 0x180012E38 (GetOverlayRootFolder.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x18005AB90 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     IsLanguageOverlayBlockedByPolicy @ 0x18005BD9C (IsLanguageOverlayBlockedByPolicy.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18006C460 (RtlpLookupCurDirSetting.c)
 *     RtlGetPersistedStateLocation @ 0x18006FF10 (RtlGetPersistedStateLocation.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800738AC (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180073914 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800751E0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007CA10 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x18007D710 (RtlpNtOpenKey.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x180088558 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x180088A4C (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BE34 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D16A0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D9738 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800DD520 (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DD5D0 (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DDFF0 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF1D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E0BF8 (RtlOpenModernAppOptionsKey.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EB0B8 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0DB8 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x1800F6F50 (RtlpGetLocaleDataKey.c)
 *     RtlpIsCustomLocale @ 0x1800F70D4 (RtlpIsCustomLocale.c)
 *     RtlOsDeploymentState @ 0x1800FB7F0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FB930 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCE60 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1800FFF8C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180100E74 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x18010A458 (RtlpHpApplySegmentHeapConfigurations.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180115E78 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1801160B8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
