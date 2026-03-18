/*
 * XREFs of MiConstructNonRetpolineImageLoadRecord @ 0x14078170C
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140710AC4 (MiLogRetpolineImageLoadEvents.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1400CFDD0 (RtlUnicodeStringCopy.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

UNICODE_STRING *__fastcall MiConstructNonRetpolineImageLoadRecord(__int64 a1)
{
  const UNICODE_STRING *v1; // rsi
  UNICODE_STRING *result; // rax
  UNICODE_STRING *v4; // rbx

  v1 = (const UNICODE_STRING *)(a1 + 88);
  result = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a1 + 88) + 40LL, 0x524E6D4Du);
  v4 = result;
  if ( result )
  {
    memset(result, 0, 0x30uLL);
    v4[1].MaximumLength = v1->Length;
    v4[1].Buffer = (wchar_t *)&v4[2].Buffer;
    RtlUnicodeStringCopy(v4 + 1, v1);
    *(_DWORD *)&v4[2].Length = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(&v4[2].MaximumLength + 1) = *(_DWORD *)(a1 + 156);
    return v4;
  }
  return result;
}
