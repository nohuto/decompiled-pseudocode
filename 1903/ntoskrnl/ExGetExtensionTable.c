/*
 * XREFs of ExGetExtensionTable @ 0x1400FB6C0
 * Callers:
 *     IopIoRateStartRateControl @ 0x140001578 (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x1400016DC (IoStopIoRateControl.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     ExpBoostIoAfterAcquire @ 0x1400B5640 (ExpBoostIoAfterAcquire.c)
 *     BCryptCloseAlgorithmProvider @ 0x1401896B8 (BCryptCloseAlgorithmProvider.c)
 *     IoBoostThreadOutstandingIo @ 0x14029BE84 (IoBoostThreadOutstandingIo.c)
 *     PsQueryActivityModerationUserSettings @ 0x140307110 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x140307174 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x14031C57C (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x14031C638 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14031C68C (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x14031C75C (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x14032AA00 (VmpPrefetchVirtualAddresses.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EB524 (PspCallProcessNotifyRoutines.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     LsaFreeReturnBuffer @ 0x1406ADAF0 (LsaFreeReturnBuffer.c)
 *     PcwCloseInstance @ 0x1406ADEF0 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x1406ADF30 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x1406AE828 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x1406AE8B4 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x1406AE904 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1406AE978 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x1406AEA08 (BCryptHashData.c)
 *     PcwAddInstance @ 0x1406AEA80 (PcwAddInstance.c)
 *     LsaLookupAuthenticationPackage @ 0x14071EC60 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x14071ED00 (LsaRegisterLogonProcess.c)
 *     LsaDeregisterLogonProcess @ 0x14072DDF0 (LsaDeregisterLogonProcess.c)
 *     PcwRegister @ 0x14073AE20 (PcwRegister.c)
 *     BCryptOpenAlgorithmProvider @ 0x140754498 (BCryptOpenAlgorithmProvider.c)
 *     PspNetRateControlDispatch @ 0x1408C7D44 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x1408DA0D4 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x1408DA174 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x1408DA1FC (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x1408DA290 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x1408DA340 (LsaLogonUser.c)
 *     EtwpConstructIptData @ 0x1409070D0 (EtwpConstructIptData.c)
 *     PcwUnregister @ 0x1409144B0 (PcwUnregister.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection_0(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
