/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x18011526C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180062630 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpGetVolumeHandle @ 0x18008E960 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x1801152D4 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
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
    NtClose(Handle);
  return (unsigned int)VolumeHandle;
}
