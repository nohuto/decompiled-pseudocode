/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x1400A3E40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3EE0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400A44D8 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 */

__int64 __fastcall RtlIsNameInUnUpcasedExpression(
        UNICODE_STRING *a1,
        UNICODE_STRING *p_UnicodeString,
        char a3,
        __int64 a4)
{
  __int64 v4; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  unsigned __int8 IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = a4;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, p_UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate(&v11, a1);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    p_UnicodeString = &UnicodeString;
    a1 = &v11;
    a3 = 0;
  }
  LOBYTE(a4) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate((_DWORD)a1, (_DWORD)p_UnicodeString, a3, a4, v4);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeAnsiString(&v11);
  return IsNameInExpressionPrivate;
}
