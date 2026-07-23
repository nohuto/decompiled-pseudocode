/*
 * XREFs of RtlEqualDomainName @ 0x180046420
 * Callers:
 *     RtlEqualComputerName @ 0x18008C090 (RtlEqualComputerName.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 */

BOOLEAN __cdecl RtlEqualDomainName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  BOOLEAN v2; // bl
  _UNICODE_STRING String2a; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING String1a; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (int)RtlCanonicalizeDomainName(&String1a) >= 0 )
  {
    if ( (int)RtlCanonicalizeDomainName(&String2a) >= 0 )
    {
      v2 = RtlEqualUnicodeString(&String1a, &String2a, 0);
      RtlFreeAnsiString(&String2a);
    }
    RtlFreeAnsiString(&String1a);
  }
  return v2;
}
