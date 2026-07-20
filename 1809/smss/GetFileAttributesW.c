/*
 * XREFs of GetFileAttributesW @ 0x14000EA04
 * Callers:
 *     SmpCheckFolderForRedirections @ 0x14000D9F4 (SmpCheckFolderForRedirections.c)
 *     GetLongPathNameW @ 0x14000F388 (GetLongPathNameW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     BaseSetLastNTError @ 0x14001008C (BaseSetLastNTError.c)
 */

__int64 __fastcall GetFileAttributesW(PCWSTR Name)
{
  int v2; // eax
  __int64 v3; // rcx
  PVOID v4; // rbx
  NTSTATUS v5; // esi
  _BYTE v7[8]; // [rsp+20h] [rbp-78h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-68h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp-38h] BYREF

  v2 = RtlDosPathNameToNtPathName_U_WithStatus(Name, v7, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v4 = BaseAddress;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    v5 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    if ( v5 >= 0 )
      return FileInformation.FileAttributes;
    if ( RtlIsDosDeviceName_U(Name) )
      return 32LL;
    v3 = (unsigned int)v5;
    goto LABEL_11;
  }
  if ( v2 == -1073741801 || v2 == -1073741670 )
  {
    v3 = (unsigned int)v2;
LABEL_11:
    BaseSetLastNTError(v3);
    return 0xFFFFFFFFLL;
  }
  RtlSetLastWin32Error(3u);
  return 0xFFFFFFFFLL;
}
