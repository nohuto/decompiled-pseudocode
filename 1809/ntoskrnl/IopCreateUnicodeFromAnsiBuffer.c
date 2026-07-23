/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x14018E0D0
 * Callers:
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
