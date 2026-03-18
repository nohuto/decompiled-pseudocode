/*
 * XREFs of ExUnlockUserBuffer @ 0x14011A6F8
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4D4 (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x14069E938 (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x1408422D0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4C0 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x14085CD74 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB35C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x1408CB77C (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1408CB814 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1408CB8AC (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1408CB920 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D0DC8 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D24C0 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1408D38F0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F40 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D43F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D4700 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x1408D4C70 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1408DA850 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
