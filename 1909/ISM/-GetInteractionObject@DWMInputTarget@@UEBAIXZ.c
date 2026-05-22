/*
 * XREFs of ?GetInteractionObject@DWMInputTarget@@UEBAIXZ @ 0x18000E180
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WEI@EAAKXZ @ 0x180037BB0 (-GetProcessId@MPCFocusTarget@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetInteractionObject(DWMInputTarget *this)
{
  return *((unsigned int *)this + 16);
}
