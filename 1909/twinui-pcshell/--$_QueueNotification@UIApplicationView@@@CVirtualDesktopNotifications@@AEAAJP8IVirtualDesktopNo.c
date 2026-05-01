/*
 * XREFs of ??$_QueueNotification@UIApplicationView@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1800660E0
 * Callers:
 *     ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x1800660A0 (-ViewVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180032690 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopNotifications::_QueueNotification<IApplicationView>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int CallbackArray; // eax
  int v6; // ebx
  struct IObjectArray *v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // r13d
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  struct IObjectArray *v14; // rcx
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  struct IObjectArray *v18; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  struct IObjectArray *v21; // [rsp+A8h] [rbp+50h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp+58h]
  __int64 v23; // [rsp+B8h] [rbp+60h]

  v22 = a3;
  v21 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v21);
  v6 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray,
      v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  }
  else
  {
    v7 = v21;
    v18 = v21;
    if ( v21 )
      ((void (__fastcall *)(struct IObjectArray *))v21->lpVtbl->AddRef)(v21);
    v8 = *a3;
    v19 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = *(_DWORD *)(a1 + 104);
    v10 = 0LL;
    v23 = 0LL;
    v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    v13 = 0LL;
    if ( v11 )
    {
      *((_DWORD *)v11 + 3) = 1;
      *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v12[2] =  Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{56,{flat}};
      v12[3] = 0LL;
      if ( v12 + 3 != &v18 )
      {
        v12[3] = v7;
        v7 = 0LL;
      }
      v12[4] = 0LL;
      if ( v12 + 4 != &v19 )
      {
        v12[4] = v8;
        v8 = 0LL;
      }
      *v12 = off_1804495C0;
      v10 = v12;
      v13 = v12;
    }
    v6 = SHTaskPoolQueueTask(0LL, 2LL, v9);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      ((void (__fastcall *)(struct IObjectArray *))v7->lpVtbl->Release)(v7);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v6,
        (int)v10);
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->Release)(v14);
    }
    v15 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return (unsigned int)v6;
}
