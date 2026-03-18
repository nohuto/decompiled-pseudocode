/*
 * XREFs of HUBDSM_ValidatingLanguageIdStringDescriptor @ 0x1C001C370
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C00261A8 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingLanguageIdStringDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheLanguageIdStringDescriptor(*(_QWORD *)(a1 + 960));
}
