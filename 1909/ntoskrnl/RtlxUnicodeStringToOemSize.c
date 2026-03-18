/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1406C7960
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToOemString @ 0x1406C7360 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C7420 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C7500 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C7770 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1406C7990 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
