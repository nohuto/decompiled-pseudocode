/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@WEI@EAAKXZ @ 0x180037BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetProcessId(__int64 a1)
{
  return DWMInputTarget::GetInteractionObject((DWMInputTarget *)(a1 - 72));
}
