/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001CD90
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C002669C (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(*(_QWORD *)(a1 + 960));
}
