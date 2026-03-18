/*
 * XREFs of IoVolumeDeviceNameToGuid @ 0x140857790
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuid(const void **a1, GUID *a2)
{
  __int64 result; // rax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+28h] [rbp-18h]
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  v6 = 0LL;
  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  result = IoVolumeDeviceNameToGuidPath(a1, (unsigned __int16 *)&v6);
  if ( (int)result >= 0 )
  {
    v4 = P;
    GuidString.Length = v6 - 20;
    GuidString.MaximumLength = WORD1(v6) - 20;
    GuidString.Buffer = (wchar_t *)((char *)P + 20);
    v5 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(v4, 0);
    return v5;
  }
  return result;
}
