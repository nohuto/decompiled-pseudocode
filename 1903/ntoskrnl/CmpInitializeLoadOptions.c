/*
 * XREFs of CmpInitializeLoadOptions @ 0x14018CF44
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 */

wchar_t *__fastcall CmpInitializeLoadOptions(ULONG_PTR BugCheckParameter3)
{
  const CHAR *v1; // rdx
  wchar_t *result; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(const CHAR **)(BugCheckParameter3 + 216);
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  RtlInitAnsiString(&SourceString, v1);
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (SourceString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                       PagedPool,
                                       2LL * ((unsigned int)SourceString.Length + 1),
                                       0x30394D43u);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &SourceString, 0);
  result = CmpLoadOptions.Buffer;
  CmpLoadOptions.Buffer[SourceString.Length] = 0;
  CmpLoadOptions.Length += 2;
  return result;
}
