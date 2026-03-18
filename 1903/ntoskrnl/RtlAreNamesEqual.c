/*
 * XREFs of RtlAreNamesEqual @ 0x1400FA810
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140091FAC (RtlpUpcaseUnicodeStringPrivate.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  char v4; // di
  UNICODE_STRING *v5; // rbx
  unsigned __int16 Length; // ax
  unsigned int v7; // r10d
  __int64 v8; // rax
  NTSTATUS v10; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  BOOLEAN v13; // bl
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v5 = (UNICODE_STRING *)ConstantNameB;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  Length = ConstantNameA->Length;
  if ( ConstantNameA->Length != ConstantNameB->Length )
    return 0;
  v7 = Length >> 1;
  if ( IgnoreCase )
  {
    if ( UpcaseTable )
    {
      v8 = 0LL;
      if ( !v7 )
        return 1;
      while ( UpcaseTable[ConstantNameA->Buffer[v8]] == UpcaseTable[ConstantNameB->Buffer[v8]] )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          return 1;
      }
      return 0;
    }
    v10 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &ConstantNameA->Length);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
    v11 = RtlpUpcaseUnicodeStringPrivate((__int64)&v15, &v5->Length);
    ConstantNameA = &UnicodeString;
    v12 = v11;
    if ( v11 < 0 )
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlRaiseStatus(v12);
    }
    Length = UnicodeString.Length;
    v5 = &v15;
    v4 = 1;
  }
  v13 = memcmp(ConstantNameA->Buffer, v5->Buffer, Length) == 0;
  if ( v4 )
  {
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&v15);
  }
  return v13;
}
