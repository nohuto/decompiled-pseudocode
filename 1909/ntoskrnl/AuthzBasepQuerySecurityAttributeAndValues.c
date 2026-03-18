/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x1400CFB50
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1400CF6A0 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepGetNextValue @ 0x1400D3CC0 (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1400D47E4 (AuthzBasepRestartOperandValueEnumeration.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14031E144 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140085440 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133EF0 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x140345FE4 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x14061AF84 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  const UNICODE_STRING *v4; // rbx
  const UNICODE_STRING *v5; // rbp
  char v6; // r12
  const UNICODE_STRING *v7; // rcx
  __int64 *v9; // rsi
  const UNICODE_STRING *v10; // rcx
  __int64 result; // rax
  wchar_t *Buffer; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    Buffer = **(wchar_t ***)(a1 + 64);
    if ( Buffer == (wchar_t *)(v2 + 72) )
      return 2147483674LL;
    goto LABEL_18;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(const UNICODE_STRING **)(v3 + 8);
    v5 = 0LL;
    v6 = 0;
    if ( v4 == (const UNICODE_STRING *)(v3 + 8) )
    {
LABEL_10:
      v9 = *(__int64 **)(v3 + 32);
      if ( v9 == (__int64 *)(v3 + 32) )
      {
LABEL_11:
        v10 = 0LL;
        if ( v6 )
          v10 = v5;
        if ( !v10 )
          return 3221226021LL;
        Buffer = v10[4].Buffer;
        *(_DWORD *)(a1 + 40) = HIDWORD(v10[3].Buffer);
        *(_WORD *)(a1 + 32) = v10[3].Length;
        *(_DWORD *)(a1 + 36) = *(_DWORD *)(&v10[3].MaximumLength + 1);
        *(_QWORD *)(a1 + 56) = v10;
LABEL_18:
        *(_QWORD *)(a1 + 64) = Buffer;
        result = 0LL;
        *(_QWORD *)(a1 + 48) = Buffer + 20;
        return result;
      }
      while ( 1 )
      {
        v5 = (const UNICODE_STRING *)(v9 - 2);
        if ( (v9[5] & 1) == 0 )
        {
          if ( AuthzBasepEqualUnicodeString(v5 + 2, (const UNICODE_STRING *)(a1 + 16)) )
            break;
        }
        v9 = (__int64 *)*v9;
        if ( v9 == (__int64 *)(v3 + 32) )
          goto LABEL_11;
      }
    }
    else
    {
      while ( 1 )
      {
        v5 = v4;
        v7 = v4 + 2;
        if ( KeGetCurrentIrql() >= 2u
           ? AuthzBasepEqualUnicodeStringCaseSensitive(v7)
           : RtlEqualUnicodeString(v7, (PCUNICODE_STRING)(a1 + 16), 1u) )
        {
          break;
        }
        v4 = *(const UNICODE_STRING **)&v4->Length;
        if ( v4 == (const UNICODE_STRING *)(v3 + 8) )
          goto LABEL_10;
      }
    }
    v6 = 1;
    goto LABEL_11;
  }
  return 3221226021LL;
}
