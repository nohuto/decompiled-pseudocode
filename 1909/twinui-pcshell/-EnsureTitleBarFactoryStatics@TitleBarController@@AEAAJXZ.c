/*
 * XREFs of ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x180267B50
 * Callers:
 *     ?GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Shell@Internal@Windows@@@Z @ 0x180268080 (-GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Sh.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802686B4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_0cfb907d4b1fa4e1c73686f042101db7___ @ 0x180265904 (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____lambda_0cfb907d4b1fa4.c)
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_a4a56e5d9a03a904b693306261be71d3___ @ 0x1802659A4 (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____lambda_a4a56e5d9a03a9.c)
 *     ??$com_weak_query@PEAVTitleBarController@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVTitleBarController@@@Z @ 0x180266230 (--$com_weak_query@PEAVTitleBarController@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exception.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@1@PEAUITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1802663FC (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@.c)
 *     ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180266BA8 (--4-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@.c)
 *     ?reset@?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180269C68 (-reset@-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@w.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall TitleBarController::EnsureTitleBarFactoryStatics(TitleBarController *this)
{
  RTL_SRWLOCK *v2; // rsi
  const char *v3; // r9
  char *v4; // rdi
  __int64 v5; // rcx
  int ActivationFactory; // eax
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64, char *); // r15
  __int64 (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  TitleBarController *v20; // [rsp+38h] [rbp-70h] BYREF
  __int64 v21[4]; // [rsp+40h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v21[2] = -2LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  try
  {
    v21[3] = (__int64)v2;
    v4 = (char *)this + 112;
    if ( !*((_QWORD *)this + 14) )
    {
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.Shell.Experience.TitleBarFactory",
        0x32u,
        0x31u);
      v5 = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      ActivationFactory = RoGetActivationFactory(v23, &GUID_8d99c789_bf9b_4d04_a028_fccdcdab52f9, (char *)this + 112);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          432LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)ActivationFactory);
      v7 = *(_QWORD *)v4;
      v8 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)v4 + 56LL);
      v9 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 120);
      v10 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = v8(v7, (char *)this + 120);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          433LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v11);
      v20 = this;
      v12 = wil::com_weak_query<TitleBarController *>((__int64 *)&hstringHeader, (__int64 *)&v20);
      v20 = this;
      v13 = *v12;
      *v12 = 0LL;
      v21[0] = v13;
      wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_a4a56e5d9a03a904b693306261be71d3___(
        &v19,
        &v20);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v21);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&hstringHeader);
      v14 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
              &v20,
              *v9,
              (__int64 (__fastcall *)(_QWORD, __int64, __int64 *)) IVirtualDesktopNotificationServicePrivate::`vcall'{48,{flat}},
              (__int64) Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{56,{flat}},
              v19);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
        (__int64 *)this + 19,
        v14);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(&v20);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      hstringHeader.Reserved.Reserved1 = this;
      v15 = wil::com_weak_query<TitleBarController *>((__int64 *)&v20, (__int64 *)&hstringHeader);
      hstringHeader.Reserved.Reserved1 = this;
      v16 = *v15;
      *v15 = 0LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v16;
      wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_0cfb907d4b1fa4e1c73686f042101db7___(
        &v19,
        &hstringHeader);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
      v17 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
              &hstringHeader,
              *v9,
              (__int64 (__fastcall *)(_QWORD, __int64, __int64 *)) Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{64,{flat}},
              (__int64) ITabletModeController::`vcall'{72,{flat}},
              v19);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
        (__int64 *)this + 22,
        v17);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(&hstringHeader);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    }
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1D3,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v3);
  }
  return result;
}
