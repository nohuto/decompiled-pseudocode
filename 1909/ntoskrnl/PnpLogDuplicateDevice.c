/*
 * XREFs of PnpLogDuplicateDevice @ 0x140874AEC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PnpLogEvent @ 0x1408618D8 (PnpLogEvent.c)
 */

void __fastcall PnpLogDuplicateDevice(PCWSTR SourceString, PCWSTR a2)
{
  unsigned __int16 Length; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v5; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v5.Length = 0LL;
  v5.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v5, a2);
  if ( (unsigned __int64)v5.MaximumLength + 2 > 0xF0 )
  {
    v5.Length = 238;
    Length = 0;
    goto LABEL_6;
  }
  if ( v5.MaximumLength + (unsigned int)DestinationString.MaximumLength > 0xF0 )
  {
    Length = 238 - v5.MaximumLength;
LABEL_6:
    DestinationString.Length = Length;
    goto LABEL_7;
  }
  Length = DestinationString.Length;
LABEL_7:
  PnpLogEvent(
    (const void **)((unsigned __int64)&DestinationString & -(__int64)(Length != 0)),
    (const void **)&v5,
    -1073479624,
    0LL,
    0);
}
