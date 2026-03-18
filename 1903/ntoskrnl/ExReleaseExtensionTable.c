/*
 * XREFs of ExReleaseExtensionTable @ 0x1400FB6A8
 * Callers:
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
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
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
 *     PcwUnregister @ 0x1409144B0 (PcwUnregister.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 8);
}
