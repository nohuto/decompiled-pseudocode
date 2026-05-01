/*
 * XREFs of ?UnsubscribeFromServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801EE9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::UnsubscribeFromServices(TabViewManager *this, struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 141) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 232LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 141));
    *((_QWORD *)this + 141) = 0LL;
  }
  if ( *((_QWORD *)this + 142) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 248LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 142));
    *((_QWORD *)this + 142) = 0LL;
  }
  if ( *((_QWORD *)this + 144) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 264LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 144));
    *((_QWORD *)this + 144) = 0LL;
  }
  if ( *((_QWORD *)this + 145) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 296LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 145));
    *((_QWORD *)this + 145) = 0LL;
  }
  if ( *((_QWORD *)this + 146) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 312LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 146));
    *((_QWORD *)this + 146) = 0LL;
  }
  if ( *((_QWORD *)this + 143) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 248LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 143));
    *((_QWORD *)this + 143) = 0LL;
  }
  if ( *((_QWORD *)this + 150) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 139) + 344LL))(
      *((_QWORD *)this + 139),
      *((_QWORD *)this + 150));
    *((_QWORD *)this + 150) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 169) + 48LL))(*((_QWORD *)this + 169));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 736));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 856));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 376));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 496));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 616));
  v4 = *((_QWORD *)this + 165);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v5 = *((_QWORD *)this + 166);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v5 + 88LL))(v5, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        922LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 168);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 168);
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 41);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 42);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 40);
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 137, 0LL);
  return 0LL;
}
