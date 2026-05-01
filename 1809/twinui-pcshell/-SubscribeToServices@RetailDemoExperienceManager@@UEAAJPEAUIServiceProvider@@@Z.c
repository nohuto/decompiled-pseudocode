/*
 * XREFs of ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180185A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EA5E8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall RetailDemoExperienceManager::SubscribeToServices(
        RetailDemoExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  char *v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+38h] [rbp-70h] BYREF
  __int64 v24; // [rsp+48h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+50h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-50h] BYREF
  __int64 v27; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v24 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v25 = v4;
  wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=((__int64 *)this + 22, (__int64)a2);
  try
  {
    v5 = *((_QWORD *)this + 22);
    v6 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &SID_ViewEventDispatcher,
           &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
           (char *)this + 184);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        735LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    *(_QWORD *)&v23 = RetailDemoExperienceManager::OnViewEvent;
    DWORD2(v23) = 0;
    hstringHeader.Reserved.Reserved1 = (char *)this - 48;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v23;
    v8 = 0LL;
    v9 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v9);
      *(HSTRING_HEADER *)(v10 + 16) = hstringHeader;
      *(_QWORD *)v10 = off_1803D7048;
      v8 = v10;
    }
    *(_QWORD *)&v23 = v8;
    v11 = *((_QWORD *)this + 23);
    v27 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.RetailDemo",
      0x2Cu,
      0x2Bu);
    v12 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, char *))(*(_QWORD *)v11 + 48LL))(
            v11,
            v8,
            0LL,
            v27,
            (char *)this + 400);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        748LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v13 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 144);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        751LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    v22 = 0LL;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v22);
    v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v22);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        755LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    v16 = v22;
    v17 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v16 + 72LL))(
            v16,
            0LL,
            &SID_ImmersiveLayout,
            &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
            (char *)this + 160);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        756LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 20) + 40LL))(
            *((_QWORD *)this + 20),
            10LL,
            ((unsigned __int64)this + 72) & -(__int64)(this != (RetailDemoExperienceManager *)48),
            (char *)this + 384);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        763LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x300,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v20);
  }
  return result;
}
