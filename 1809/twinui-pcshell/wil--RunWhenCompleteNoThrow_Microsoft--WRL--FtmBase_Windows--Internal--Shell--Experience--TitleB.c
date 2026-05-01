/*
 * XREFs of wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_5860b5e6cc13572247a78ff58f223768__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801D0E20
 * Callers:
 *     _lambda_d5a453c259c1c666423c9d39fc9189fd_::operator() @ 0x1801D71EC (_lambda_d5a453c259c1c666423c9d39fc9189fd_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@V?$function@$$A6AJJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@$$QEAV?$function@$$A6AJJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x1801D0D14 (--$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU-$IAsyncOperation@PEAVTitleBarFactory@Experience@.c)
 *     ??0?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1801D4594 (--0-$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@QEAA@.c)
 */

__int64 __fastcall wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_5860b5e6cc13572247a78ff58f223768__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+28h] [rbp-80h] BYREF
  __int64 (__fastcall ***v8)(); // [rsp+88h] [rbp-20h]

  v8 = 0LL;
  v6 = off_1803DD9B8;
  std::function<long (Windows::Internal::Shell::Experience::ITabTransferEventBroker *)>::function<long (Windows::Internal::Shell::Experience::ITabTransferEventBroker *)>(
    &v7,
    a2);
  v8 = &v6;
  LODWORD(a1) = wil::details::RunWhenComplete<Microsoft::WRL::FtmBase,Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *,wistd::function<long (long,Windows::Internal::Shell::Experience::ITitleBarFactory *)>>(
                  a1,
                  (__int64)&v6);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v6,
    v3);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v6,
    v4);
  return (unsigned int)a1;
}
