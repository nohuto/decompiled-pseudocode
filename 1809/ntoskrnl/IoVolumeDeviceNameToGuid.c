/*
 * XREFs of IoVolumeDeviceNameToGuid @ 0x14081F350
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuid(const void **a1, GUID *a2)
{
  __int64 result; // rax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  unsigned __int16 v6[4]; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+28h] [rbp-18h]
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)v6 = 0;
  P = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  result = IoVolumeDeviceNameToGuidPath(a1, v6);
  if ( (int)result >= 0 )
  {
    v4 = P;
    GuidString.Length = v6[0] - 20;
    GuidString.MaximumLength = v6[1] - 20;
    GuidString.Buffer = (wchar_t *)((char *)P + 20);
    v5 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(v4, 0);
    return v5;
  }
  return result;
}
