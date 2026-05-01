/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x18007FD30
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180042A80 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpGetVolumeHandle @ 0x1800461A8 (RtlpGetVolumeHandle.c)
 *     NtClose_0 @ 0x18004823C (NtClose_0.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18007FD98 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, __int64 a2)
{
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose_0(Handle);
  return (unsigned int)VolumeHandle;
}
