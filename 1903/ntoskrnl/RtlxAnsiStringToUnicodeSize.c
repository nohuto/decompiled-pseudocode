/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x14063CC30
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x14069E0AC (PopAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140925EE0 (AslStringAnsiToUnicode.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14063CC60 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, AnsiString->Buffer, AnsiString->Length);
  return BytesInUnicodeString + 2;
}
