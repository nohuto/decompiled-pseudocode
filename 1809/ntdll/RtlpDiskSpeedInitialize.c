/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18008E820
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180026CC0 (RtlGetNtSystemRoot.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18008E88C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x18008E950 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  __int64 NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
