/*
 * XREFs of ExReleaseExtensionTable @ 0x14010DBEC
 * Callers:
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
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
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
 *     PcwUnregister @ 0x1408D7220 (PcwUnregister.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 8);
}
