/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18008C5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18008C62C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x18008C6D8 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

_BOOL8 __fastcall RtlpDiskSpeedInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  PWSTR NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v7);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v7;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
