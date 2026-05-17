/*
 * XREFs of AVrfpAppendCurrentUserSid @ 0x1800DB92C
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DB828 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     NtOpenProcessTokenEx @ 0x1800A08E0 (NtOpenProcessTokenEx.c)
 */

int __fastcall AVrfpAppendCurrentUserSid(__int16 *a1)
{
  int result; // eax
  int InformationToken; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  __int16 v8; // r8
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  PSID Sid; // [rsp+58h] [rbp-19h]

  result = NtOpenProcessTokenEx();
  if ( result >= 0 )
  {
    InformationToken = NtQueryInformationToken();
    NtClose(0LL);
    if ( InformationToken >= 0 )
    {
      v4 = (unsigned __int16)*a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( result >= 0 )
      {
        v6 = *a1;
        v7 = UnicodeString.Length + *a1;
        if ( (unsigned __int16)(UnicodeString.Length + v6) < v6 )
          v8 = -1;
        else
          v8 = UnicodeString.Length + *a1;
        *a1 = v8;
        if ( v7 < v6 )
          return -1073741789;
      }
    }
    else
    {
      return InformationToken;
    }
  }
  return result;
}
