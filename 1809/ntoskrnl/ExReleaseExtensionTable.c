/*
 * XREFs of ExReleaseExtensionTable @ 0x14010DBCC
 * Callers:
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
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
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
 *     PcwUnregister @ 0x1408D7240 (PcwUnregister.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 8);
}
