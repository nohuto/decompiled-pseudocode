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

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  wchar_t *v6; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v8; // rdx
  NTSTATUS v9; // edi
  int v10; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-90h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken(-6LL, 1LL, Sid, 88LL, &v12);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v10);
    if ( (int)result >= 0 )
    {
      v4 = v10;
      UnicodeString->Length = 0;
      v5 = (unsigned __int16)(v4 + 34);
      UnicodeString->MaximumLength = v5;
      v6 = (wchar_t *)sub_18006D6B8(v5, v3);
      UnicodeString->Buffer = v6;
      if ( v6 )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v8 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v4;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v8];
        v9 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v9 < 0 )
          RtlFreeUnicodeString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v9;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
