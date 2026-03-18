/*
 * XREFs of ExRaiseAccessViolation @ 0x1408D65C0
 * Callers:
 *     NtEnumerateKey @ 0x1405D22F0 (NtEnumerateKey.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x14062A220 (PfpPfnPrioRequest.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     IopValidateQueryInformationParameters @ 0x14063B290 (IopValidateQueryInformationParameters.c)
 *     NtQueryKey @ 0x14063FBB0 (NtQueryKey.c)
 *     KeUserModeCallback @ 0x140646480 (KeUserModeCallback.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     NtAlpcQueryInformation @ 0x14068E890 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
