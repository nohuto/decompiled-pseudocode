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
  _UNICODE_STRING String2; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+40h] [rbp-C8h] BYREF

  String2.Buffer = (PWCH)&v6;
  String2.MaximumLength = 170;
  result = 0;
  if ( (int)sub_1800F6F14(&String2, a2) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
  }
  return result;
}
