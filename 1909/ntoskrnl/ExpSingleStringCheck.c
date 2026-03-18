/*
 * XREFs of ExpSingleStringCheck @ 0x140A18970
 * Callers:
 *     ExpStringCheck @ 0x140A1868C (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x140114110 (RtlComputeCrc32.c)
 */

ULONG __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (PUCHAR)DestinationString.Buffer, DestinationString.Length);
}
