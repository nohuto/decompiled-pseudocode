/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1C00F07B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(__int64 a1, unsigned __int16 a2)
{
  return RIMDeliverConfigRequest(a1, *(_QWORD *)(a1 + 464), a2, 1);
}
