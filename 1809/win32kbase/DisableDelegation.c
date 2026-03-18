/*
 * XREFs of DisableDelegation @ 0x1C008AEF0
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C0034A24 (SetInputDelegationModeImpl.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C0148B84 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
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
