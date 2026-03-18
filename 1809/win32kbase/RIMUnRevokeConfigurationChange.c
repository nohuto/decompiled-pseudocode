/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1C011BCE0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(__int64 a1, unsigned __int16 a2)
{
  return RIMDeliverConfigRequest((struct RIMDEV *)a1, *(_QWORD *)(a1 + 464), a2, 1u);
}
