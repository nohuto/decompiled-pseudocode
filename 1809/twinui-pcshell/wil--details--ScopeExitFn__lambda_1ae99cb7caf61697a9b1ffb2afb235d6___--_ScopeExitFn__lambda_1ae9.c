/*
 * XREFs of wil::details::ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___::_ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___ @ 0x18027E320
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$4 @ 0x180280FDD (_XamlAltTabViewHost--Show_--_1_--dtor$4.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18027F7E0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___::_ScopeExitFn__lambda_1ae99cb7caf61697a9b1ffb2afb235d6___(
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
