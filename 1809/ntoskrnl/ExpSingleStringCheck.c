/*
 * XREFs of ExpSingleStringCheck @ 0x1409D65FC
 * Callers:
 *     ExpStringCheck @ 0x1409D6318 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 */

ULONG __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (PUCHAR)DestinationString.Buffer, DestinationString.Length);
}
