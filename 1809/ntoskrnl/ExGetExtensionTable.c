/*
 * XREFs of ExGetExtensionTable @ 0x14010DC84
 * Callers:
 *     IopIoRateStartRateControl @ 0x1400016E0 (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x140001814 (IoStopIoRateControl.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     BCryptCloseAlgorithmProvider @ 0x140181E80 (BCryptCloseAlgorithmProvider.c)
 *     PsQueryActivityModerationUserSettings @ 0x1402E9D20 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x1402E9D84 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x1402FE594 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x1402FE650 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x1402FE6A4 (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x1402FE774 (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F5C14 (PspCallProcessNotifyRoutines.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     LsaFreeReturnBuffer @ 0x140690ED0 (LsaFreeReturnBuffer.c)
 *     PcwCloseInstance @ 0x1406912D0 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x140691310 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x140692424 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x1406924B0 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140692500 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x140692574 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140692604 (BCryptHashData.c)
 *     PcwAddInstance @ 0x140692680 (PcwAddInstance.c)
 *     LsaDeregisterLogonProcess @ 0x1407082F0 (LsaDeregisterLogonProcess.c)
 *     PcwRegister @ 0x14070FFF0 (PcwRegister.c)
 *     LsaRegisterLogonProcess @ 0x140710910 (LsaRegisterLogonProcess.c)
 *     LsaLookupAuthenticationPackage @ 0x140710980 (LsaLookupAuthenticationPackage.c)
 *     BCryptOpenAlgorithmProvider @ 0x14073D270 (BCryptOpenAlgorithmProvider.c)
 *     PspNetRateControlDispatch @ 0x14088B074 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14089CBB4 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14089CC54 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14089CCDC (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14089CD70 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x14089CE20 (LsaLogonUser.c)
 *     EtwpConstructIptData @ 0x1408CAEBC (EtwpConstructIptData.c)
 *     PcwUnregister @ 0x1408D84E0 (PcwUnregister.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection_0(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
