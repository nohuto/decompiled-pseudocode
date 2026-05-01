/*
 * XREFs of ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180394F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18039186C (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180392D8C (-StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1803938C4 (-Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtu.c)
 *     ?erase@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@2@@Z @ 0x1803956E8 (-erase@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID(VirtualPinnedAppsHandler *this, unsigned __int16 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rdi
  const WCHAR *v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  struct IVirtualDesktop *v16; // [rsp+30h] [rbp-1F8h] BYREF
  unsigned __int16 *v17; // [rsp+38h] [rbp-1F0h]
  __int64 v18; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-1D0h]
  RTL_SRWLOCK *v22; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-1B8h] BYREF
  int v25; // [rsp+78h] [rbp-1B0h]
  __int64 v26; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 *v28; // [rsp+90h] [rbp-198h]
  __int64 v29; // [rsp+98h] [rbp-190h]
  _QWORD v30[4]; // [rsp+A0h] [rbp-188h] BYREF
  _QWORD v31[40]; // [rsp+C0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v30[1] = -2LL;
  v17 = a2;
  try
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v22);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v31,
      (__int64)"VirtualDesktopUnpinAppActivity");
    v31[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v31);
    if ( !*((_QWORD *)this + 10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x80070490LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        170LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x8007139FLL);
    v4 = *((_QWORD *)this + 13);
    v30[2] = v4;
    v5 = *((_QWORD *)this + 12);
    v30[0] = v5;
    while ( 1 )
    {
      v29 = v5;
      if ( v5 == v4 )
        break;
      v6 = (const WCHAR *)v5;
      if ( *(_QWORD *)(v5 + 24) >= 8uLL )
        v6 = *(const WCHAR **)v5;
      if ( CompareStringOrdinal(v6, -1, v17, -1, 1) == 2 )
        break;
      v5 += 32LL;
    }
    if ( v5 == *((_QWORD *)this + 13) )
    {
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v31);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
      result = 1LL;
    }
    else
    {
      LOBYTE(v3) = 1;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, unsigned __int16 *))(**((_QWORD **)this + 7)
                                                                                           + 64LL))(
             *((_QWORD *)this + 7),
             v3,
             L"PinnedApps",
             v17);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          178LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v9);
      std::vector<std::wstring>::erase((char *)this + 96, v30, v5);
      v18 = 0LL;
      v10 = *((_QWORD *)this + 10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, v17, &v18);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          182LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v11);
      v16 = 0LL;
      v12 = *((_QWORD *)this + 6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v13 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v12 + 224LL))(v12, &v16);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          185LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v13);
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v24,
        v18);
      LODWORD(v19) = 0;
      v20 = 0LL;
      v21 = &v24;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
      LODWORD(v26) = v25;
      v27 = 0LL;
      v28 = &v24;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v26);
      while ( (_DWORD)v19 != (_DWORD)v26 || v21 != v28 )
      {
        v14 = v20;
        v23 = v20;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
        v15 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, __int64, struct IVirtualDesktop *))(*(_QWORD *)this + 104LL))(
                this,
                v14,
                v16);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            188LL,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        LODWORD(v19) = v19 + 1;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
        (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v31,
        v17,
        v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v31);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC1,
                           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v7);
  }
  return result;
}
