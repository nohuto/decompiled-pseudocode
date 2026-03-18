/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1405A44B0
 * Callers:
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     CmpVolumeManagerGetContextForFile @ 0x1405A4298 (CmpVolumeManagerGetContextForFile.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1406FBE80 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x14075F728 (CmpVolumeContextStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x1405A4540 (IoVolumeDeviceToGuidPath.c)
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
