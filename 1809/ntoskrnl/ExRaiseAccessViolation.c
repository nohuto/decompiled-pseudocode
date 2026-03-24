/*
 * XREFs of ExRaiseAccessViolation @ 0x1408D65A0
 * Callers:
 *     NtEnumerateKey @ 0x1405D22F0 (NtEnumerateKey.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x14062A220 (PfpPfnPrioRequest.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     IopValidateQueryInformationParameters @ 0x14063B290 (IopValidateQueryInformationParameters.c)
 *     NtQueryKey @ 0x14063FB90 (NtQueryKey.c)
 *     KeUserModeCallback @ 0x140646460 (KeUserModeCallback.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     NtAlpcQueryInformation @ 0x14068E870 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
