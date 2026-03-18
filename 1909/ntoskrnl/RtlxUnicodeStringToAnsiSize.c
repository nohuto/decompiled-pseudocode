/*
 * XREFs of RtlxUnicodeStringToAnsiSize @ 0x140711920
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1401554A4 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1408CDE10 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409122A0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140912BD0 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1406C7990 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToAnsiSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
