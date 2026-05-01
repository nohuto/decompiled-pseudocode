/*
 * XREFs of wil::details::ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___::_ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___ @ 0x1802F6ECC
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$4 @ 0x1802F99E8 (_XamlAltTabViewHost--Show_--_1_--dtor$4.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802F82B0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___::_ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
