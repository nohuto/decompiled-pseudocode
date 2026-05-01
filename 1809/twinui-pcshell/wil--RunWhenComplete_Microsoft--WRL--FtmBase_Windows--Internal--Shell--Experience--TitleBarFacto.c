/*
 * XREFs of wil::RunWhenComplete_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_38da9a343bc3123aac8a9a1bc66a1660__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801F574C
 * Callers:
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1801F7544 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@V?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@$$QEAV?$function@$$A6AXJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x1801F5640 (--$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU-$IAsyncOperation@PEAVTitleBarFactor_ea_1801F5640.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::RunWhenComplete_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_38da9a343bc3123aac8a9a1bc66a1660__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD v5[14]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v5[0] = off_1803CABB8;
  v5[13] = v5;
  v1 = wil::details::RunWhenComplete<Microsoft::WRL::FtmBase,Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *,wistd::function<void (long,Windows::Internal::Shell::Experience::ITitleBarFactory *)>>(
         a1,
         (__int64)v5);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1515LL,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v1);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v5,
    v2);
  return wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
           (__int64)v5,
           v3);
}
