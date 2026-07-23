/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x1400CC900
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1400D8E6C (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

UNICODE_STRING *__fastcall AuthzBasepAllocateSecurityAttribute(PCUNICODE_STRING SourceString)
{
  SIZE_T v2; // rdx
  POOL_TYPE v3; // ecx
  UNICODE_STRING *result; // rax
  UNICODE_STRING *v5; // rbx

  v2 = SourceString->Length + 112LL;
  v3 = PagedPool;
  if ( KeGetCurrentIrql() >= 2u )
    v3 = NonPagedPoolNx;
  result = (UNICODE_STRING *)ExAllocatePoolWithTag(v3, v2, 0x74416553u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x70uLL);
    v5[2].Length = 0;
    v5[2].MaximumLength = SourceString->Length;
    v5[2].Buffer = &v5[7].Length;
    RtlCopyUnicodeString(v5 + 2, SourceString);
    *(_QWORD *)&v5[5].Length = (char *)v5 + 72;
    v5[4].Buffer = (wchar_t *)&v5[4].Buffer;
    v5[6].Buffer = &v5[6].Length;
    *(_QWORD *)&v5[6].Length = v5 + 6;
    return v5;
  }
  return result;
}
