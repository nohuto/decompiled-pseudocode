/*
 * XREFs of NtOpenKey @ 0x1800A0520
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlOpenCurrentUser @ 0x1800297E0 (RtlOpenCurrentUser.c)
 *     IsLanguageOverlayBlockedByPolicy @ 0x180032D78 (IsLanguageOverlayBlockedByPolicy.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     GetOverlayRootFolder @ 0x180042138 (GetOverlayRootFolder.c)
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18004B7A8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18004C4C0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18004CAB0 (RtlpLoadMachineUIByPolicy.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800523FC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x1800524E4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800527DC (EtwpQueryRegString.c)
 *     RtlpQueryRegistryValues @ 0x180053704 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     RtlpLookupCurDirSetting @ 0x180058040 (RtlpLookupCurDirSetting.c)
 *     WerpGlobalFlagsForProcess @ 0x18006D8F0 (WerpGlobalFlagsForProcess.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079268 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180079424 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007948C (RtlpProcessIFEOKeyFilter.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A950 (RtlpGetDeviceFamilyInfoEnum.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x180080F00 (RtlpTestHookInitialize.c)
 *     RtlpNtOpenKey @ 0x180081A10 (RtlpNtOpenKey.c)
 *     RtlpIsCustomLocale @ 0x18008A4DC (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008AEB0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RXactpOpenTargetKey @ 0x18008B47C (RXactpOpenTargetKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008F224 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D2FD0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DB828 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     WerpEscalationIsDisabled @ 0x1800DF8B0 (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DF960 (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E0668 (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E1550 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E2F18 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E2FB0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E38F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EDEE4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F3A14 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetLocaleDataKey @ 0x1800F9318 (RtlpGetLocaleDataKey.c)
 *     RtlOsDeploymentState @ 0x1800FE320 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1800FE460 (RtlQueryValidationRunlevel.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FF570 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801026E8 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180103698 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x18010C22C (RtlpHpApplySegmentHeapConfigurations.c)
 *     OpenOrCreateKeyWithFlags @ 0x180116E1C (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKey()
{
  __int64 result; // rax

  result = 18LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
