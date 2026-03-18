/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x14018DF70
 * Callers:
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x1409D6100 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
