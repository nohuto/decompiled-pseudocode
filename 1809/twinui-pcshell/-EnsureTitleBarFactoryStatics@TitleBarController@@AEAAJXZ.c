/*
 * XREFs of ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1801F7544
 * Callers:
 *     ?GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Shell@Internal@Windows@@@Z @ 0x1801F7AF0 (-GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Sh.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801F8174 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_be49c22beafaa17dca8757bacf025c52___ @ 0x1801F4EFC (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____ptr64___lambda_be49c2.c)
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_f8512defb81b80cdd5799a3f81e33f8d___ @ 0x1801F4F9C (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____ptr64___lambda_f8512d.c)
 *     wil::RunWhenComplete_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_38da9a343bc3123aac8a9a1bc66a1660__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801F574C (wil--RunWhenComplete_Microsoft--WRL--FtmBase_Windows--Internal--Shell--Experience--TitleBarFacto.c)
 *     ??$com_weak_query@PEAVTitleBarController@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVTitleBarController@@@Z @ 0x1801F5A60 (--$com_weak_query@PEAVTitleBarController@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exception.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@1@PEAUITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1801F5C2C (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@.c)
 *     ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F63F4 (--4-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@.c)
 *     ?reset@?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x1801F98B4 (-reset@-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@w.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall TitleBarController::EnsureTitleBarFactoryStatics(TitleBarController *this)
{
  char v2; // r14
  RTL_SRWLOCK *v3; // rsi
  const char *v4; // r9
  __int64 *v5; // rdi
  __int64 v6; // rcx
  int ActivationFactory; // eax
  __int64 v8; // r15
  __int64 (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 result; // rax
  int v21[2]; // [rsp+30h] [rbp-78h] BYREF
  TitleBarController *v22; // [rsp+38h] [rbp-70h] BYREF
  __int64 v23[4]; // [rsp+40h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-48h] BYREF
  __int64 v25; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v23[2] = -2LL;
  v2 = 0;
  v3 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  try
  {
    v23[3] = (__int64)v3;
    v5 = (__int64 *)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v25 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.Shell.Experience.TitleBarFactory",
        0x32u,
        0x31u);
      v6 = *v5;
      *v5 = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ActivationFactory = RoGetActivationFactory(v25, &GUID_8d99c789_bf9b_4d04_a028_fccdcdab52f9, (char *)this + 112);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          440LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)ActivationFactory);
      v8 = *v5;
      v9 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 120);
      v10 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 56LL))(v8, (char *)this + 120);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          441LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v11);
      v22 = this;
      v12 = wil::com_weak_query<TitleBarController *>((__int64 *)&hstringHeader, (__int64 *)&v22);
      v22 = this;
      v13 = *v12;
      *v12 = 0LL;
      v23[0] = v13;
      wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_f8512defb81b80cdd5799a3f81e33f8d___(
        (__int64 *)v21,
        &v22);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v23);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&hstringHeader);
      v14 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
              &v22,
              *v9,
              (__int64 (__fastcall *)(_QWORD, __int64, __int64 *)) IVirtualDesktopNotificationServicePrivate::`vcall'{48,{flat}},
              (__int64) Windows::Foundation::IPropertyValueStatics::`vcall'{56,{flat}},
              *(__int64 *)v21);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
        (__int64 *)this + 19,
        v14);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(&v22);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      hstringHeader.Reserved.Reserved1 = this;
      v15 = wil::com_weak_query<TitleBarController *>((__int64 *)&v22, (__int64 *)&hstringHeader);
      hstringHeader.Reserved.Reserved1 = this;
      v16 = *v15;
      *v15 = 0LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v16;
      wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_be49c22beafaa17dca8757bacf025c52___(
        (__int64 *)v21,
        &hstringHeader);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
      v17 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
              &hstringHeader,
              *v9,
              (__int64 (__fastcall *)(_QWORD, __int64, __int64 *)) IVirtualDesktopNotification::`vcall'{64,{flat}},
              (__int64) Windows::Foundation::IPropertyValue::`vcall'{72,{flat}},
              *(__int64 *)v21);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
        (__int64 *)this + 22,
        v17);
      wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(&hstringHeader);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      v2 = 1;
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    if ( v2 )
    {
      v18 = *v5;
      *(_QWORD *)v21 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 72LL))(v18, v21);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          478LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v19);
      wil::RunWhenComplete_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_38da9a343bc3123aac8a9a1bc66a1660__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_(*(__int64 *)v21);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v21);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E8,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v4);
  }
  return result;
}
