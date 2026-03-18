/*
 * XREFs of IoVolumeDeviceToGuid @ 0x1406615B0
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140661390 (CmpVolumeManagerGetContextForFile.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x140734770 (FsRtlVolumeDeviceToCorrelationId.c)
 *     CmpVolumeContextStart @ 0x1407864EC (CmpVolumeContextStart.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x140661640 (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
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
