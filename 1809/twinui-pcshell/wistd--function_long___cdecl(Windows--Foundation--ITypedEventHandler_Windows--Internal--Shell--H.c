/*
 * XREFs of wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64)_::operator___lambda_3f9aacea76e9fa4b85478e3300a81c4f___ @ 0x1801AEA98
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1801AEFA0 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64__::operator___lambda_3f9aacea76e9fa4b85478e3300a81c4f___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1,
    (__int64)a2);
  *a1 = off_1803CA7F8;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[2] = 0LL;
  if ( a1 + 2 != v4 )
  {
    a1[2] = *v4;
    *v4 = 0LL;
  }
  a1[13] = a1;
  return a1;
}
