/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14073253C
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140180E34 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x14081A034 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x1409F9470 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140180EE0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING Destination, PCSZ Source)
{
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationString, Source) >= 0
      && RtlAnsiStringToUnicodeString(Destination, &DestinationString, 1u) >= 0;
}
