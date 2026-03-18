/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x14063FCE0
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x1406B4224 (PopAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140925940 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14063FD10 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, AnsiString->Buffer, AnsiString->Length);
  return BytesInUnicodeString + 2;
}
