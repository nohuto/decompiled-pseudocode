/*
 * XREFs of wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x180184C40
 * Callers:
 *     _CToastCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18018999D (_CToastCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180185610 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___(
        _BYTE *a1)
{
  int result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)(*(_QWORD *)a1 + 48LL));
  }
  return result;
}
