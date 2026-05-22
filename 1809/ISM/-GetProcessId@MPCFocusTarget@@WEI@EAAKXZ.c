/*
 * XREFs of ?GetProcessId@MPCFocusTarget@@WEI@EAAKXZ @ 0x18000B2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCFocusTarget::GetProcessId(__int64 a1)
{
  return DWMInputTarget::GetInteractionObject((DWMInputTarget *)(a1 - 72));
}
