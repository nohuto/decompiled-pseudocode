/*
 * XREFs of wil::details::ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___::_ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___ @ 0x1802FB98C
 * Callers:
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$2 @ 0x1802FCD0D (_XamlSnapAssistViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___::_ScopeExitFn__lambda_abe76fe381029ddc420af44c6a1b9af2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
