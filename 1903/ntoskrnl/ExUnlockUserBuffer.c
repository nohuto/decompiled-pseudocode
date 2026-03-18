/*
 * XREFs of ExUnlockUserBuffer @ 0x140116740
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BF68C (ExGetSessionPoolTagInformation.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     KdSystemDebugControl @ 0x14087DCF0 (KdSystemDebugControl.c)
 *     MmGetSessionMappedViewInformation @ 0x1408879CC (MmGetSessionMappedViewInformation.c)
 *     MiCopyLargeVad @ 0x140899938 (MiCopyLargeVad.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140908CDC (ExGetSessionBigPoolInformation.c)
 *     ExpGetHandleInformation @ 0x140909124 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409091BC (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140909254 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409092C8 (ExpGetObjectInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E5E0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090FD14 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateBootEntries @ 0x1409111A0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409117E0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140911C90 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x140911FA0 (NtQueryBootEntryOrder.c)
 *     NtQueryDriverEntryOrder @ 0x140912510 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1409185C0 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
