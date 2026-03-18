/*
 * XREFs of ExUnlockUserBuffer @ 0x1400F4860
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A468C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x14087D3F0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408871F8 (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x140899158 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14090873C (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140908B84 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140908C1C (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140908CB4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140908D28 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E040 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090F774 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x140910C00 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140911240 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409116F0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140911A00 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140911F70 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x140918020 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
