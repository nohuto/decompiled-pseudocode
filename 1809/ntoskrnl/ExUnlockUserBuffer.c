/*
 * XREFs of ExUnlockUserBuffer @ 0x14011A718
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4B4 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x14069E918 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x1408422B0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4A0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x14085CD54 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB33C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1408CB75C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1408CB7F4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1408CB88C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1408CB900 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D0DA8 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D24A0 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1408D38D0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F20 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D43D0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D46E0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1408D4C50 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1408DA830 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
