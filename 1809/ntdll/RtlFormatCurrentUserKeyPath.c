/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x18003F560
 * Callers:
 *     RtlOpenCurrentUser @ 0x1800297E0 (RtlOpenCurrentUser.c)
 *     RtlpGetRegistryHandle @ 0x180053FCC (RtlpGetRegistryHandle.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlLengthSidAsUnicodeString @ 0x18003F670 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  int v9; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-90h] BYREF
  __int64 v11; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = NtQueryInformationToken(-6LL, 1LL, Sid, 88LL, &v11);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v9);
    if ( (int)result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v7 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeAnsiString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v8;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
