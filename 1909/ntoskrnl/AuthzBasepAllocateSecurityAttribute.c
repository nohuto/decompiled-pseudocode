/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x1400854B4
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x140085044 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     AuthzBasepMemAlloc @ 0x140085658 (AuthzBasepMemAlloc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

UNICODE_STRING *__fastcall AuthzBasepAllocateSecurityAttribute(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *v2; // rax
  UNICODE_STRING *v3; // rbx

  v2 = (UNICODE_STRING *)AuthzBasepMemAlloc(SourceString->Length + 112LL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x70uLL);
    v3[2].MaximumLength = SourceString->Length;
    v3[2].Buffer = &v3[7].Length;
    RtlCopyUnicodeString(v3 + 2, SourceString);
    *(_QWORD *)&v3[5].Length = (char *)v3 + 72;
    v3[4].Buffer = (wchar_t *)&v3[4].Buffer;
    v3[6].Buffer = &v3[6].Length;
    *(_QWORD *)&v3[6].Length = v3 + 6;
  }
  return v3;
}
