/*
 * XREFs of ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted @ 0x1C00405A0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0017D78 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted(__int64 a1)
{
  return Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted(*(_QWORD *)(a1 + 960));
}
