/*
 * XREFs of ??$_QueueNotification@UIApplicationView@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x180061930
 * Callers:
 *     ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x1800618F0 (-ViewVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ffe68e3f9796c16a376e5d4d98821788_____lambda_ffe68e3f9796c16a376e5d4d98821788___ @ 0x180061A50 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ffe68e3f9796c.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopNotifications::_QueueNotification<IApplicationView>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int CallbackArray; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // edi
  __int64 (__fastcall *v15)(); // [rsp+38h] [rbp-18h] BYREF
  struct IObjectArray *v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  struct IObjectArray *v20; // [rsp+78h] [rbp+28h] BYREF
  __int64 *v21; // [rsp+80h] [rbp+30h]

  v21 = a3;
  v20 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v20);
  v6 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  else
  {
    v15 =  Windows::Foundation::IPropertyValueStatics::`vcall'{56,{flat}};
    v16 = v20;
    if ( v20 )
      ((void (__fastcall *)(struct IObjectArray *))v20->lpVtbl->AddRef)(v20);
    v7 = *a3;
    v17 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *(_DWORD *)(a1 + 104);
    v9 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ffe68e3f9796c16a376e5d4d98821788_____lambda_ffe68e3f9796c16a376e5d4d98821788___(
                      &v19,
                      &v15);
    v11 = *v9;
    *v9 = 0LL;
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v12,
        v10);
    }
    v13 = SHTaskPoolQueueTask(0LL, 2LL, v8, 0LL, v11, 0LL);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v13);
    v6 = v13;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  return v6;
}
