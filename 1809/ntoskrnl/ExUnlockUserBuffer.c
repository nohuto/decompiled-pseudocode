/*
 * XREFs of ExUnlockUserBuffer @ 0x14011A788
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14069F774 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x140843510 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x14084D700 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x14085DFB4 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CC5FC (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1408CCA1C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1408CCAB4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1408CCB4C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1408CCBC0 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D2068 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D3760 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D51E0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D5690 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D59A0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1408D5F10 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
