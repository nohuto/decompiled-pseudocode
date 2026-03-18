/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1406C9110
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToOemString @ 0x1406C8B10 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C8BD0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C8CB0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C8F20 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1406C9140 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
