/*
 * XREFs of ??1Win32kInterop@@UEAA@XZ @ 0x1800BADE8
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800BB5FC (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@XZ @ 0x1800BA8D0 (--1-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@XZ.c)
 *     ?clear@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x1800BF468 (-clear@-$list@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CB_KUTarg.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::~Win32kInterop(Win32kInterop *this, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  const struct std::nothrow_t *v10; // rdx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  _QWORD **v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  void *v20; // rcx
  _QWORD **v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rcx

  v3 = (__int64 *)((char *)this + 1104);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1168, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3 + 1,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 1040, v4);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 123,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 122);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 912, v5);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 107,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 106);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 784, v6);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 91,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 90);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 656, v7);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 75,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 74);
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::~KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>(
    (__int64 *)this + 58,
    v8);
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::~KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>(
    (__int64 *)this + 42,
    v9);
  if ( *((_QWORD *)this + 38) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 152LL))(*((_QWORD *)this + 37));
  if ( *((_QWORD *)this + 40) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 152LL))(*((_QWORD *)this + 37));
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 36);
  v11 = (void *)*((_QWORD *)this + 34);
  if ( v11 )
    operator delete(v11, v10);
  v12 = *((_QWORD *)this + 33);
  if ( v12 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 32);
  if ( v13 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (void *)*((_QWORD *)this + 27);
  if ( v14 )
  {
    std::_Deallocate<16,0>(
      v14,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 29) - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::clear((char *)this + 200);
  std::_Deallocate<16,0>(*((void **)this + 25), (const struct std::nothrow_t *)0x90);
  v15 = (void *)*((_QWORD *)this + 19);
  if ( v15 )
  {
    std::_Deallocate<16,0>(
      v15,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 21) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  v16 = (_QWORD **)*((_QWORD *)this + 17);
  v17 = *v16;
  *v16 = v16;
  *(_QWORD *)(*((_QWORD *)this + 17) + 8LL) = *((_QWORD *)this + 17);
  *((_QWORD *)this + 18) = 0LL;
  v18 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v17 != v18 )
  {
    do
    {
      v19 = (_QWORD *)*v17;
      std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x20);
      v17 = v19;
      v18 = (_QWORD *)*((_QWORD *)this + 17);
    }
    while ( v19 != v18 );
  }
  std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)0x20);
  v20 = (void *)*((_QWORD *)this + 11);
  if ( v20 )
  {
    std::_Deallocate<16,0>(
      v20,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v21 = (_QWORD **)*((_QWORD *)this + 9);
  v22 = *v21;
  *v21 = v21;
  *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = 0LL;
  v23 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v22 != v23 )
  {
    do
    {
      v24 = (_QWORD *)*v22;
      std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)0x20);
      v22 = v24;
      v23 = (_QWORD *)*((_QWORD *)this + 9);
    }
    while ( v24 != v23 );
  }
  std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)0x20);
  v25 = *((_QWORD *)this + 7);
  if ( v25 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
