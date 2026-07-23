/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x14073370C
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140180F94 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140181040 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING Destination, PCSZ Source)
{
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitAnsiStringEx(&DestinationString, Source) >= 0
      && RtlAnsiStringToUnicodeString(Destination, &DestinationString, 1u) >= 0;
}
