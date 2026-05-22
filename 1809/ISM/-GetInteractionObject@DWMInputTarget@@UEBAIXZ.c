/*
 * XREFs of ?GetInteractionObject@DWMInputTarget@@UEBAIXZ @ 0x18000B500
 * Callers:
 *     ?GetProcessId@MPCFocusTarget@@WEI@EAAKXZ @ 0x18000B2D0 (-GetProcessId@MPCFocusTarget@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetInteractionObject(DWMInputTarget *this)
{
  return *((unsigned int *)this + 16);
}
