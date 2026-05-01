/*
 * XREFs of ?GetTaggableTargetCount@CAppTransitionTargetBase@@UEAAIXZ @ 0x1803A90F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAppTransitionTargetBase::GetTaggableTargetCount(CAppTransitionTargetBase *this)
{
  return *((_DWORD *)this + 10) != 4095;
}
