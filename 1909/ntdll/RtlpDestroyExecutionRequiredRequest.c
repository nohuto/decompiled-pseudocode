/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x1801044D4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x18009DA60 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}
