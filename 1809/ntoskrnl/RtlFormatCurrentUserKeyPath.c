/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x14065A5C0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x14071B0D0 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x1407235D0 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x14075D21C (_RegRtlOpenPredefinedKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1401B8590 (ZwQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065A9D4 (RtlLengthSidAsUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406B2120 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING KeyPath)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  SIZE_T v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi
  int v9; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Sid, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v9);
    if ( result >= 0 )
    {
      v3 = v9;
      KeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      KeyPath->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      KeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(KeyPath, L"\\REGISTRY\\USER\\");
        Buffer = KeyPath->Buffer;
        v7 = (unsigned __int64)KeyPath->Length >> 1;
        UnicodeString.MaximumLength = v3;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(KeyPath);
        else
          KeyPath->Length += UnicodeString.Length;
        return v8;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
