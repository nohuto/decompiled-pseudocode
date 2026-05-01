/*
 * XREFs of ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1803F7AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180170FE8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1801B458C (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1803F76E4 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803F8210 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1803F8A2C (-StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1803F901C (-Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtual.c)
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
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, WCHAR *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  void (__fastcall *v15)(__int64, struct IVirtualDesktop **); // rbx
  struct IApplicationView *v16; // rbx
  int v17; // eax
  struct IVirtualDesktop *v18; // [rsp+40h] [rbp-208h] BYREF
  __int64 v19; // [rsp+48h] [rbp-200h] BYREF
  __int64 v20; // [rsp+50h] [rbp-1F8h] BYREF
  struct IApplicationView *v21; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-1E8h]
  RTL_SRWLOCK *v23; // [rsp+68h] [rbp-1E0h] BYREF
  struct IApplicationView *v24; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1D0h] BYREF
  int v26; // [rsp+80h] [rbp-1C8h]
  WCHAR *v27; // [rsp+88h] [rbp-1C0h]
  __int64 v28; // [rsp+90h] [rbp-1B8h]
  __int64 v29; // [rsp+98h] [rbp-1B0h]
  __int64 v30; // [rsp+A0h] [rbp-1A8h]
  __int64 v31; // [rsp+A8h] [rbp-1A0h]
  __int64 *v32; // [rsp+B0h] [rbp-198h]
  struct IVirtualDesktop **v33; // [rsp+B8h] [rbp-190h]
  __int64 v34; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-180h] BYREF
  __int64 *v36; // [rsp+D0h] [rbp-178h]
  _QWORD v37[40]; // [rsp+E0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  v29 = -2LL;
  try
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v23);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v37,
      (__int64)"VirtualDesktopPinAppActivity");
    v37[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v37);
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
    v27 = a2;
    v5 = *((_QWORD *)this + 13);
    v30 = v5;
    v6 = *((_QWORD *)this + 12);
    v31 = v6;
    while ( 1 )
    {
      v28 = v6;
      if ( v6 == v5 )
        break;
      v7 = (const WCHAR *)v6;
      if ( *(_QWORD *)(v6 + 24) >= 8uLL )
        v7 = *(const WCHAR **)v6;
      if ( CompareStringOrdinal(v7, -1, v27, -1, 1) == 2 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v37);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
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
        (void *)0x94,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
    std::wstring::wstring((__int64)&v34, a2);
    std::vector<std::wstring>::emplace_back<std::wstring>((__int64)this + 96, (__int64)&v34);
    std::wstring::_Tidy_deallocate(&v34);
    v19 = 0LL;
    v11 = *((_QWORD *)this + 10);
    v12 = *(__int64 (__fastcall **)(__int64, WCHAR *, __int64 *))(*(_QWORD *)v11 + 40LL);
    v32 = &v19;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v13 = v12(v11, a2, &v19);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        152LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v13);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v25,
      v19);
    LODWORD(v20) = 0;
    v21 = 0LL;
    v22 = &v25;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
    LODWORD(v34) = v26;
    v35 = 0LL;
    v36 = &v25;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v34);
    while ( (_DWORD)v20 != (_DWORD)v34 || v22 != v36 )
    {
      v16 = v21;
      v24 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      v17 = VirtualPinnedAppsHandler::PinViewInternal(this, v16, 1);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9B,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      LODWORD(v20) = v20 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v18 = 0LL;
    v14 = *((_QWORD *)this + 6);
    v15 = *(void (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v14 + 224LL);
    v33 = &v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v15(v14, &v18);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v37,
      a2,
      v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v37);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
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
