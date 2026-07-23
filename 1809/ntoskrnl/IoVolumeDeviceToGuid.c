/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1405A54B0
 * Callers:
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405A5298 (CmpVolumeManagerGetContextForFile.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1406FD100 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x1407608F8 (CmpVolumeContextStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A5540 (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}
