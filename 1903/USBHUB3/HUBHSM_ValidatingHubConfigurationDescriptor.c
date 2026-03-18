/*
 * XREFs of HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C00092B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003048 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 */

__int64 __fastcall HUBHSM_ValidatingHubConfigurationDescriptor(__int64 a1)
{
  return HUBHTX_ValidateAndCacheHubConfigDescriptor(*(_QWORD *)(a1 + 960));
}
