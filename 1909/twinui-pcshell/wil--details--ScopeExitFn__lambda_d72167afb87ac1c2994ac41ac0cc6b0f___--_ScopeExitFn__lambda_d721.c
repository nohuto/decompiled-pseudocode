/*
 * XREFs of wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x180193EB0
 * Callers:
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180196621 (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180194AC0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___(
        _BYTE *a1)
{
  int result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)(*(_QWORD *)a1 + 80LL));
  }
  return result;
}
