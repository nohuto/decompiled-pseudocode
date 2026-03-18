/*
 * XREFs of ExRaiseAccessViolation @ 0x140913900
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CF250 (PfpPfnPrioRequest.c)
 *     IopValidateQueryInformationParameters @ 0x1405F0FB0 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     NtQueryKey @ 0x1406010E0 (NtQueryKey.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     KeUserModeCallback @ 0x14064CF40 (KeUserModeCallback.c)
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140665E60 (NtQuerySecurityAttributesToken.c)
 *     NtAlpcQueryInformation @ 0x1406B43B0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
