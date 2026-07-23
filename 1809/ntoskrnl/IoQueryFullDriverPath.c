/*
 * XREFs of IoQueryFullDriverPath @ 0x140191AA0
 * Callers:
 *     PiGetDriverImageDirectory @ 0x14082672C (PiGetDriverImageDirectory.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 */

__int64 __fastcall IoQueryFullDriverPath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  wchar_t *Pool_0; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221226021LL;
  Pool_0 = (wchar_t *)IopVerifierExAllocatePool_0(PagedPool, *(unsigned __int16 *)(v2 + 74));
  a2->Buffer = Pool_0;
  if ( !Pool_0 )
    return 3221225626LL;
  a2->MaximumLength = *(_WORD *)(v2 + 74);
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v2 + 72));
  return 0LL;
}
