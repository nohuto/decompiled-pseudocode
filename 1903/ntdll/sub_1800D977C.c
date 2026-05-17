/*
 * XREFs of sub_1800D977C @ 0x1800D977C
 * Callers:
 *     sub_1800D9678 @ 0x1800D9678 (sub_1800D9678.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 */

int __fastcall sub_1800D977C(__int16 *a1)
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

  result = ZwOpenProcessTokenEx();
  if ( result >= 0 )
  {
    InformationToken = ZwQueryInformationToken();
    ZwClose();
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
