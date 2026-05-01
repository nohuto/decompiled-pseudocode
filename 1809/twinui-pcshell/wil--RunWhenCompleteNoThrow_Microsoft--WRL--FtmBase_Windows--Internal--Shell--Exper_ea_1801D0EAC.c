/*
 * XREFs of wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_cbb0258dd247905ababaa0c64dc22f3a__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801D0EAC
 * Callers:
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ??$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@V?$function@$$A6AJJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@$$QEAV?$function@$$A6AJJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@@Z@wistd@@@Z @ 0x1801D0D14 (--$RunWhenComplete@VFtmBase@WRL@Microsoft@@PEAU-$IAsyncOperation@PEAVTitleBarFactory@Experience@.c)
 */

__int64 __fastcall wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_cbb0258dd247905ababaa0c64dc22f3a__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // rcx
  __int64 *v5; // rcx
  _QWORD *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+38h] [rbp-11h] BYREF
  __int64 v14; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v15[9]; // [rsp+48h] [rbp-1h] BYREF

  v11[0] = off_1803CAAF0;
  v3 = a2 + 1;
  v11[1] = *a2;
  v12 = 0LL;
  if ( &v12 != a2 + 1 )
  {
    v12 = *v3;
    *v3 = 0LL;
  }
  v4 = a2 + 2;
  v13 = 0LL;
  if ( &v13 != a2 + 2 )
  {
    v13 = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 3;
  v14 = 0LL;
  if ( &v14 != a2 + 3 )
  {
    v14 = *v5;
    *v5 = 0LL;
  }
  v6 = a2 + 4;
  v15[0] = 0LL;
  if ( v15 != v6 )
  {
    v15[0] = *v6;
    *v6 = 0LL;
  }
  v15[8] = v11;
  v7 = wil::details::RunWhenComplete<Microsoft::WRL::FtmBase,Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *,wistd::function<long (long,Windows::Internal::Shell::Experience::ITitleBarFactory *)>>(
         a1,
         (__int64)v11);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v11,
    v8);
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)v11,
    v9);
  return v7;
}
