/*
 * XREFs of sub_1800F71AC @ 0x1800F71AC
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800F6F14 @ 0x1800F6F14 (sub_1800F6F14.c)
 */

bool __fastcall sub_1800F71AC(PCWSTR SourceString, __int64 a2)
{
  bool result; // al
  UNICODE_STRING v4; // [rsp+20h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-C8h] BYREF

  v4.Buffer = (wchar_t *)&v6;
  v4.MaximumLength = 170;
  result = 0;
  if ( (int)sub_1800F6F14(&v4, a2) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !(unsigned int)RtlCompareUnicodeString(&DestinationString.Length, &v4.Length, 1) )
      return 1;
  }
  return result;
}
