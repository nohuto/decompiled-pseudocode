/*
 * XREFs of ?SubscribeToServices@TitleBarController@@UEAAJPEAUIServiceProvider@@@Z @ 0x180269440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6CA0 (--$query@UITabExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIInspectable@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TitleBarController::SubscribeToServices(TitleBarController *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // eax
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v7; // rcx
  int v8; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rdi
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const char *v17; // r9
  __int64 result; // rax
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v21[1] = -2LL;
  QueryService = a2->lpVtbl->QueryService;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 15);
  try
  {
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (char *)this + 120);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        479LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v5);
    v6 = a2->lpVtbl->QueryService;
    v7 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v6)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           (char *)this + 128);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        481LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v8);
    lpVtbl = a2->lpVtbl;
    v20 = 0LL;
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &unk_18051A880,
            &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
            &v20);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        484LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v10);
    v19 = 0LL;
    v11 = v20;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 48LL);
    v23 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.TabControl",
      0x2Cu,
      0x2Bu);
    v19 = 0LL;
    v13 = v12(v11, v23, &v19);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        487LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v13);
    v14 = (__int64 *)wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Shell::Experience::ITabExperienceManager>(
                       &v19,
                       (__int64)v21);
    v15 = *v14;
    *v14 = 0LL;
    v16 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v15;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v21);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EC,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v17);
  }
  return result;
}
