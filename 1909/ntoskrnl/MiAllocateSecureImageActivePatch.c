/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x1405B0C38
 * Callers:
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

UNICODE_STRING *__fastcall MiAllocateSecureImageActivePatch(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v3; // rbx

  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, SourceString->Length + 64LL, 0x73486D4Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v3[3].Buffer = &v3[4].Length;
    v3[3].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(v3 + 3, SourceString);
  }
  return v3;
}
