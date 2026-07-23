/*
 * XREFs of ExReleaseExtensionTable @ 0x14010DC6C
 * Callers:
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
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
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
 *     PcwUnregister @ 0x1408D84E0 (PcwUnregister.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 8);
}
