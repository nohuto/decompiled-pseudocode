/*
 * XREFs of Microsoft::WRL::ComPtr__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_::_ComPtr__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_ @ 0x18038F898
 * Callers:
 *     _ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_1_::dtor$7 @ 0x180390439 (_ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CBF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_::_ComPtr__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
