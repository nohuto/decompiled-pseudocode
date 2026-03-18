/*
 * XREFs of HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C001DCA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0027D84 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateConfigurationDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheConfigDescriptor(*(_QWORD *)(a1 + 960));
}
