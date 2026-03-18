/*
 * XREFs of ExGetExtensionTable @ 0x1400FD850
 * Callers:
 *     IopIoRateStartRateControl @ 0x140001578 (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x1400016DC (IoStopIoRateControl.c)
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C570 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003CEE0 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400C5ED0 (KiAbProcessThreadLocks.c)
 *     ExpBoostIoAfterAcquire @ 0x140100ED8 (ExpBoostIoAfterAcquire.c)
 *     BCryptCloseAlgorithmProvider @ 0x140189C68 (BCryptCloseAlgorithmProvider.c)
 *     IoBoostThreadOutstandingIo @ 0x14029BBE4 (IoBoostThreadOutstandingIo.c)
 *     PsQueryActivityModerationUserSettings @ 0x140306BC0 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x140306C24 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x14031BFCC (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x14031C088 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14031C0DC (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x14031C1AC (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x14032A450 (VmpPrefetchVirtualAddresses.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EBCF4 (PspCallProcessNotifyRoutines.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     LsaFreeReturnBuffer @ 0x1406AFA20 (LsaFreeReturnBuffer.c)
 *     PcwCloseInstance @ 0x1406AFE20 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x1406AFE60 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x1406B0758 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x1406B07E4 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x1406B0834 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1406B08A8 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x1406B0938 (BCryptHashData.c)
 *     PcwAddInstance @ 0x1406B09B0 (PcwAddInstance.c)
 *     LsaLookupAuthenticationPackage @ 0x140720AF0 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x140720B90 (LsaRegisterLogonProcess.c)
 *     LsaDeregisterLogonProcess @ 0x14072FCC0 (LsaDeregisterLogonProcess.c)
 *     PcwRegister @ 0x14073CD80 (PcwRegister.c)
 *     BCryptOpenAlgorithmProvider @ 0x140754F28 (BCryptOpenAlgorithmProvider.c)
 *     PspNetRateControlDispatch @ 0x1408C7624 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x1408D99D4 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x1408D9A74 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x1408D9AFC (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x1408D9B90 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x1408D9C40 (LsaLogonUser.c)
 *     EtwpConstructIptData @ 0x140906A90 (EtwpConstructIptData.c)
 *     PcwUnregister @ 0x140913F10 (PcwUnregister.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection_0(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
