/*
 * XREFs of PnpMultiSzContainsString @ 0x14016F2A4
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072B300 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgAppendMultiSz @ 0x140865AC8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140866EC0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140869800 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

PCWSTR __fastcall PnpMultiSzContainsString(PCWSTR SourceString, const WCHAR *a2)
{
  __int64 v3; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&String1.Length = 0LL;
  v3 = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&String1, a2);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
      return SourceString;
    SourceString += ((unsigned __int64)DestinationString.Length >> 1) + 1;
  }
  return (PCWSTR)v3;
}
