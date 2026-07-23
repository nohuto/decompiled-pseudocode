/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x180029D7C
 * Callers:
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180071958 (LdrpMapDllRetry.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18002A538 (RtlDosPathNameToRelativeNtPathName.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A0AA0 (ZwQueryAttributesFile.c)
 */

NTSTATUS __fastcall LdrpGetNtPathFromDosPath(int a1, _UNICODE_STRING *a2)
{
  int v2; // r8d
  NTSTATUS result; // eax
  ULONG v5; // eax
  _UNICODE_STRING *Buffer; // rcx
  _UNICODE_STRING v7; // xmm0
  _UNICODE_STRING *v8; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING v9; // [rsp+48h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-21h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp+Fh] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  result = RtlDosPathNameToRelativeNtPathName(a1, (_DWORD)a2, v2, (_DWORD)a2, (__int64)&v9, (__int64)&v8);
  if ( result >= 0 )
  {
    if ( v8 == &v9 )
    {
      Buffer = (_UNICODE_STRING *)a2->Buffer;
      if ( &a2[1] != Buffer )
        NtdllpFreeStringRoutine(Buffer);
      v7 = v9;
      *(_DWORD *)&a2->Length = 0x1000000;
      a2[1].Length = 0;
      *a2 = v7;
    }
    v5 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v5 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v5;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
