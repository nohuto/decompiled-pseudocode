/*
 * XREFs of ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180391C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180083640 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180183FD0 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180391814 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039231C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180392ABC (-StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x18039305C (-Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall VirtualPinnedAppsHandler::PinAppID(VirtualPinnedAppsHandler *this, WCHAR *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rdi
  const WCHAR *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  struct IApplicationView *v14; // rbx
  int v15; // eax
  struct IVirtualDesktop *v16; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-1E8h] BYREF
  struct IApplicationView *v19; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 *v20; // [rsp+60h] [rbp-1D8h]
  RTL_SRWLOCK *v21; // [rsp+68h] [rbp-1D0h] BYREF
  struct IApplicationView *v22; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1C0h] BYREF
  int v24; // [rsp+80h] [rbp-1B8h]
  WCHAR *v25; // [rsp+88h] [rbp-1B0h]
  __int64 v26; // [rsp+90h] [rbp-1A8h]
  __int64 v27; // [rsp+98h] [rbp-1A0h]
  __int64 v28; // [rsp+A0h] [rbp-198h]
  __int64 v29; // [rsp+A8h] [rbp-190h]
  __int64 v30; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-180h] BYREF
  __int64 *v32; // [rsp+C0h] [rbp-178h]
  _QWORD v33[40]; // [rsp+D0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  v27 = -2LL;
  try
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v21);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v33,
      (__int64)"VirtualDesktopPinAppActivity");
    v33[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v33);
    if ( !*((_QWORD *)this + 10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        140LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x80070490LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        141LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x8007139FLL);
    v25 = a2;
    v5 = *((_QWORD *)this + 13);
    v28 = v5;
    v6 = *((_QWORD *)this + 12);
    v29 = v6;
    while ( 1 )
    {
      v26 = v6;
      if ( v6 == v5 )
        break;
      v7 = (const WCHAR *)v6;
      if ( *(_QWORD *)(v6 + 24) >= 8uLL )
        v7 = *(const WCHAR **)v6;
      if ( CompareStringOrdinal(v7, -1, v25, -1, 1) == 2 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v33);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
        return 1LL;
      }
      v6 += 32LL;
    }
    LOBYTE(v4) = 1;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, WCHAR *, int, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
            *((_QWORD *)this + 7),
            v4,
            L"PinnedApps",
            a2,
            4,
            0LL,
            0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        148LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
    std::wstring::wstring((__int64)&v30, a2);
    std::vector<std::wstring>::emplace_back<std::wstring>((__int64)this + 96, (__int64)&v30);
    std::wstring::_Tidy_deallocate(&v30);
    v17 = 0LL;
    v11 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v12 = (*(__int64 (__fastcall **)(__int64, WCHAR *, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, a2, &v17);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        152LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v12);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v23,
      v17);
    LODWORD(v18) = 0;
    v19 = 0LL;
    v20 = &v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    LODWORD(v30) = v24;
    v31 = 0LL;
    v32 = &v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v30);
    while ( (_DWORD)v18 != (_DWORD)v30 || v20 != v32 )
    {
      v14 = v19;
      v22 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v15 = VirtualPinnedAppsHandler::PinViewInternal(this, v14, 1);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          155LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      LODWORD(v18) = v18 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v16 = 0LL;
    v13 = *((_QWORD *)this + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    (*(void (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v13 + 224LL))(v13, &v16);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v33,
      a2,
      v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v33);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA3,
                           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v8);
  }
  return result;
}
