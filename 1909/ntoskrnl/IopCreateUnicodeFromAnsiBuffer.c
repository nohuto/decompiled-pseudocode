/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140189C2C
 * Callers:
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationStringa.Length = 0LL;
  DestinationStringa.Buffer = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
