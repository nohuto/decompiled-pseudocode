/*
 * XREFs of NtClose_0 @ 0x18004823C
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180046090 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x1800465F0 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18007FB08 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18007FD30 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
