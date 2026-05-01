/*
 * XREFs of wil::details::ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___::_ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___ @ 0x18026AFE4
 * Callers:
 *     _XamlAllUpViewHost::ViewLoaded_::_1_::dtor$1 @ 0x180276B3A (_XamlAllUpViewHost--ViewLoaded_--_1_--dtor$1.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18026F810 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___::_ScopeExitFn__lambda_c23c10aab4e8d83c8d2f1a5eb32cf8d0___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
