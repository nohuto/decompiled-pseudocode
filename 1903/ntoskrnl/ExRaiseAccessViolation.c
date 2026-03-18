/*
 * XREFs of ExRaiseAccessViolation @ 0x140913EA0
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     IopValidateQueryInformationParameters @ 0x1405F06C0 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 *     NtEnumerateKey @ 0x14064F940 (NtEnumerateKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140652D60 (NtQuerySecurityAttributesToken.c)
 *     KeUserModeCallback @ 0x140686D70 (KeUserModeCallback.c)
 *     NtAlpcQueryInformation @ 0x1406B1410 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
