/*
 * XREFs of NtClose_0 @ 0x1800487DC
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180046E10 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x180047420 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180073AD8 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180073D00 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
