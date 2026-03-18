/*
 * XREFs of DisableDelegation @ 0x1C009DD90
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x1C008FAEC (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C0177AD0 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall DisableDelegation(CCursorClip *a1)
{
  __int64 result; // rax

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    CCursorClip::OverrideClip(a1, 0);
  result = 0LL;
  InputDelegation::CInputDelegationInfo::gInstance = 0uLL;
  return result;
}
