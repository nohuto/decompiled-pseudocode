/*
 * XREFs of PnpMultiSzContainsString @ 0x14016B764
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B5C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705840 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgAppendMultiSz @ 0x14082B2E8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF50 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 */

PCWSTR __fastcall PnpMultiSzContainsString(PCWSTR SourceString, const WCHAR *a2)
{
  __int64 v3; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&String2, SourceString);
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return SourceString;
    SourceString += ((unsigned __int64)String2.Length >> 1) + 1;
  }
  return (PCWSTR)v3;
}
