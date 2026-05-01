/*
 * XREFs of ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803271D0
 * Callers:
 *     ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180327808 (-UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180323300 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AppViewDataSourceAdapterBase::UpdateIcon(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  struct IApplicationViewIconLoader *v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  HSTRING_HEADER *v13; // rdi
  int v14; // eax
  int v15; // eax
  void *v16; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  const WCHAR *v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER v23; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22 = -2LL;
  v16 = 0LL;
  v6 = (struct IApplicationViewIconLoader *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v16 = 0LL;
    v7 = AppViewIconFactory::CreateInstance(a2, v6, a3, &v16);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        511LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  else if ( *((_QWORD *)this + 6) )
  {
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v18);
    if ( v18 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v18 + 24LL))(v18, &v17);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          519LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      v9 = *((_QWORD *)this + 6);
      v16 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v9 + 48LL))(v9, (unsigned int)v17, &v16);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          520LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    else
    {
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
      v20 = -1LL;
      v21 = -1LL;
      v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, const WCHAR **))(*(_QWORD *)a2 + 136LL))(a2, &v19);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          525LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v17 = v19;
      v12 = *((_QWORD *)this + 6);
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v17);
      v16 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, PVOID, void **))(*(_QWORD *)v12 + 56LL))(
              v12,
              v13[1].Reserved.Reserved1,
              &v16);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          526LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
          (const char *)(unsigned int)v14);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
  }
  v15 = (*(__int64 (__fastcall **)(const struct _GUID *, void *))(*(_QWORD *)&a3->Data1 + 96LL))(a3, v16);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      530LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v15);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
}
