/*
 * XREFs of wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___ @ 0x1800E5694
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x1800E763F (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 112LL) = 0;
    v2 = *(_QWORD *)a1;
    result = wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
               *(_QWORD *)a1,
               a2);
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  return result;
}
