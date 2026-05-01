/*
 * XREFs of wil::details::ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___::_ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___ @ 0x1802C3F8C
 * Callers:
 *     _XamlAllUpViewHost::Show_::_1_::dtor$2 @ 0x1802CE535 (_XamlAllUpViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802C8AE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___::_ScopeExitFn__lambda_1641477e29131e5d86e6ba234aa93fe0___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 232LL));
    return CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
