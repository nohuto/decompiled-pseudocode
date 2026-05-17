/*
 * XREFs of RtlInt64ToUnicodeString @ 0x1800EA850
 * Callers:
 *     <none>
 * Callees:
 *     RtlLargeIntegerToChar @ 0x1800018F0 (RtlLargeIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlInt64ToUnicodeString(__int64 a1, unsigned int a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-78h] BYREF
  char v7[80]; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&SourceString.Length = a1;
  result = RtlLargeIntegerToChar((unsigned __int64 *)&SourceString.Length, a2, 65, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
