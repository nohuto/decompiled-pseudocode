/*
 * XREFs of ExReleaseExtensionTable @ 0x1400FD838
 * Callers:
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
 *     EtwpDestructIptData @ 0x140906B30 (EtwpDestructIptData.c)
 *     PcwUnregister @ 0x140913F10 (PcwUnregister.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 8);
}
