/*
 * XREFs of ExGetExtensionTable @ 0x14010DC04
 * Callers:
 *     IopIoRateStartRateControl @ 0x1400016E0 (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x140001814 (IoStopIoRateControl.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA20 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140108270 (ExpBoostIoAfterAcquire.c)
 *     BCryptCloseAlgorithmProvider @ 0x140181D40 (BCryptCloseAlgorithmProvider.c)
 *     PsQueryActivityModerationUserSettings @ 0x1402E9B30 (PsQueryActivityModerationUserSettings.c)
 *     PsSetExeModerationState @ 0x1402E9B94 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x1402FE3A4 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x1402FE460 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x1402FE4B4 (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x1402FE584 (BCryptGenRandom.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CE30 (VmpPrefetchVirtualAddresses.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F4C14 (PspCallProcessNotifyRoutines.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     LsaFreeReturnBuffer @ 0x14068FD10 (LsaFreeReturnBuffer.c)
 *     PcwCloseInstance @ 0x140690110 (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x140690150 (PcwCreateInstance.c)
 *     BCryptGetProperty @ 0x140691264 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x1406912F0 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140691340 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1406913B4 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140691444 (BCryptHashData.c)
 *     PcwAddInstance @ 0x1406914C0 (PcwAddInstance.c)
 *     LsaDeregisterLogonProcess @ 0x140707050 (LsaDeregisterLogonProcess.c)
 *     PcwRegister @ 0x14070ED50 (PcwRegister.c)
 *     LsaRegisterLogonProcess @ 0x14070F670 (LsaRegisterLogonProcess.c)
 *     LsaLookupAuthenticationPackage @ 0x14070F6E0 (LsaLookupAuthenticationPackage.c)
 *     BCryptOpenAlgorithmProvider @ 0x14073C080 (BCryptOpenAlgorithmProvider.c)
 *     PspNetRateControlDispatch @ 0x140889E14 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14089B954 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14089B9F4 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14089BA7C (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14089BB10 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x14089BBC0 (LsaLogonUser.c)
 *     EtwpConstructIptData @ 0x1408C9BFC (EtwpConstructIptData.c)
 *     PcwUnregister @ 0x1408D7220 (PcwUnregister.c)
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
