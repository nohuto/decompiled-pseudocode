/*
 * XREFs of ExRaiseAccessViolation @ 0x1408D7860
 * Callers:
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     IopValidateQueryInformationParameters @ 0x14063C2B0 (IopValidateQueryInformationParameters.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     NtAlpcQueryInformation @ 0x14068FA30 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
