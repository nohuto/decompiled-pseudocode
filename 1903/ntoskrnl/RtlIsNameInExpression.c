/*
 * XREFs of RtlIsNameInExpression @ 0x140096220
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400958C4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1403469BC (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140091FAC (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140096360 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // esi
  wchar_t *Buffer; // rbx
  NTSTATUS v7; // eax
  BOOLEAN IsNameInExpressionPrivate; // di
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v7 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &Name->Length);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
