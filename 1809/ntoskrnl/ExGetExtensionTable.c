/*
 * XREFs of ExGetExtensionTable @ 0x14010DBE4
 * Callers:
 *     IopIoRateStartRateControl @ 0x1400016E0 (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x140001814 (IoStopIoRateControl.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140108250 (ExpBoostIoAfterAcquire.c)
 *     BCryptCloseAlgorithmProvider @ 0x140181D20 (BCryptCloseAlgorithmProvider.c)
 *     PsQueryActivityModerationUserSettings @ 0x1402E9A30 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x1402E9A94 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x1402FE2A4 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x1402FE360 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x1402FE3B4 (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x1402FE484 (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CD30 (VmpPrefetchVirtualAddresses.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F4C14 (PspCallProcessNotifyRoutines.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     LsaFreeReturnBuffer @ 0x14068FD30 (LsaFreeReturnBuffer.c)
 *     PcwCloseInstance @ 0x140690130 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x140690170 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x140691284 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x140691310 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140691360 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1406913D4 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140691464 (BCryptHashData.c)
 *     PcwAddInstance @ 0x1406914E0 (PcwAddInstance.c)
 *     LsaDeregisterLogonProcess @ 0x140707070 (LsaDeregisterLogonProcess.c)
 *     PcwRegister @ 0x14070ED70 (PcwRegister.c)
 *     LsaRegisterLogonProcess @ 0x14070F690 (LsaRegisterLogonProcess.c)
 *     LsaLookupAuthenticationPackage @ 0x14070F700 (LsaLookupAuthenticationPackage.c)
 *     BCryptOpenAlgorithmProvider @ 0x14073C0A0 (BCryptOpenAlgorithmProvider.c)
 *     PspNetRateControlDispatch @ 0x140889E34 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14089B974 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14089BA14 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14089BA9C (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14089BB30 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x14089BBE0 (LsaLogonUser.c)
 *     EtwpConstructIptData @ 0x1408C9C1C (EtwpConstructIptData.c)
 *     PcwUnregister @ 0x1408D7240 (PcwUnregister.c)
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
