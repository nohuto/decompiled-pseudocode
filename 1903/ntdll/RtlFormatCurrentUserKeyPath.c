/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x180013800
 * Callers:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 * Callees:
 *     RtlLengthSidAsUnicodeString @ 0x180013910 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  USHORT v4; // di
  __int64 v5; // rcx
  WCHAR *v6; // rax
  PWCH Buffer; // rax
  unsigned __int64 v8; // rdx
  int v9; // edi
  ULONG StringLength; // [rsp+30h] [rbp-98h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Sid, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &StringLength);
    if ( result >= 0 )
    {
      v4 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v5 = (unsigned __int16)(v4 + 34);
      CurrentUserKeyPath->MaximumLength = v5;
      v6 = (WCHAR *)sub_18006D6B8(v5, v3);
      CurrentUserKeyPath->Buffer = v6;
      if ( v6 )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v8 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v4;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v8];
        v9 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v9 < 0 )
          RtlFreeUnicodeString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
        return v9;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
