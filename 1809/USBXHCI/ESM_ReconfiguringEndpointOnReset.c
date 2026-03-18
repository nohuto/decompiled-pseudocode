/*
 * XREFs of ESM_ReconfiguringEndpointOnReset @ 0x1C0040B90
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0016E34 (Endpoint_OnResetEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointOnReset(__int64 a1)
{
  Endpoint_OnResetEndpointConfigure(*(int **)(a1 + 960));
  return 1000LL;
}
