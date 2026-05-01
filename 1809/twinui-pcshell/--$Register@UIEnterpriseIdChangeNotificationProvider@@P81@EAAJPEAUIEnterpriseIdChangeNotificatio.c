/*
 * XREFs of ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x18012A760
 * Callers:
 *     ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18012DC60 (-SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x18009B340 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 112) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v6 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v11 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
      v9[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      v9[1] = (__int64) IBamThrottleSettings::`vcall'{32,{flat}};
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a1,
        v8);
      *(_QWORD *)a1 = off_1803C8F60;
      *(_QWORD *)(a1 + 8) = 0LL;
      if ( (__int64 *)(a1 + 8) != v9 )
      {
        *(_QWORD *)(a1 + 8) = a2;
        v9[0] = 0LL;
      }
      *(_QWORD *)(a1 + 16) =  IBamThrottleSettings::`vcall'{32,{flat}};
      *(_QWORD *)(a1 + 104) = a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
