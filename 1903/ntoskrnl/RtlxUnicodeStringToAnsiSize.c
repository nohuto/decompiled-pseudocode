/*
 * XREFs of RtlxUnicodeStringToAnsiSize @ 0x14070FB40
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x140154E04 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1408CE530 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x140912840 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140913170 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1406C9140 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToAnsiSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
