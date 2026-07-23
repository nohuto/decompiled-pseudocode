/*
 * XREFs of sub_1800F70E4 @ 0x1800F70E4
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C950 (__report_rangecheckfailure.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCD80 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

bool __fastcall sub_1800F70E4(PCWSTR SourceString)
{
  _UNICODE_STRING String2; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR SourceStringa[88]; // [rsp+40h] [rbp-C8h] BYREF

  *(_QWORD *)&String2.Length = 85LL;
  if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, SourceStringa, &String2) < 0
    || *(_QWORD *)&String2.Length >= 0x55uLL )
  {
    return 0;
  }
  if ( (unsigned __int64)(2LL * *(_QWORD *)&String2.Length) >= 0xAA )
    _report_rangecheckfailure();
  SourceStringa[*(_QWORD *)&String2.Length] = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&String2, SourceStringa);
  return !RtlCompareUnicodeString(&DestinationString, &String2, 1u);
}
