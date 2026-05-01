/*
 * XREFs of ?GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILauncherOptions2@System@5@@Z @ 0x1801DCA1C
 * Callers:
 *     ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DC98C (-GetLaunchOptionSite@@YA-AV-$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUSh.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x1802022CC (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801D4694 (--0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E3D90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_1801E3D90.c)
 */

__int64 __fastcall GetLauncherOptions(
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a1,
        struct Windows::System::ILauncherOptions2 **a2)
{
  LaunchNewTabPageService *v4; // rbx
  LaunchNewTabPageService *v5; // rax
  LaunchNewTabPageService *v6; // r8
  LaunchNewTabPageService *v7; // r14
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  struct Windows::System::ILauncherOptions2 *v16; // rax
  struct Windows::System::ILauncherOptions2 *v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v19[1] = -2LL;
  *a2 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v5 = (LaunchNewTabPageService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v4 = LaunchNewTabPageService::LaunchNewTabPageService(v5, a1);
    v6 = v4;
    v7 = v4;
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)0x8007000ELL);
LABEL_25:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
    return (unsigned int)v8;
  }
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.System.LauncherOptions",
    0x1Fu,
    0x1Eu);
  v18 = 0LL;
  v8 = RoActivateInstance(v21, v19);
  if ( v8 < 0 )
    goto LABEL_21;
  v9 = *(_QWORD *)&GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data1
     - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v9 = *(_QWORD *)GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data4
       - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( v9 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::System::ILauncherOptions2 **))v19[0])(
           v19[0],
           &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49,
           &v18);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
    v10 = (__int64)v18;
  }
  else
  {
    v10 = v19[0];
    v18 = (struct Windows::System::ILauncherOptions2 *)v19[0];
  }
  if ( v8 < 0 )
  {
LABEL_21:
    v14 = 170LL;
    goto LABEL_22;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400270);
  v12 = (*(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v10 + 56LL))(v10, v11[1].Reserved.Reserved1);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 171LL;
    goto LABEL_23;
  }
  v15 = (**(__int64 (__fastcall ***)(struct Windows::System::ILauncherOptions2 *, GUID *, __int64 *))v18)(
          v18,
          &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
          v19);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5786LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v15);
  v8 = (*(__int64 (__fastcall **)(__int64, LaunchNewTabPageService *))(*(_QWORD *)v19[0] + 24LL))(v19[0], v4);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
  if ( v8 < 0 )
  {
    v14 = 172LL;
LABEL_22:
    v13 = (unsigned int)v8;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)v13);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::Release(v4);
    goto LABEL_25;
  }
  v16 = v18;
  v18 = 0LL;
  *a2 = v16;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::Release(v4);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
  return 0LL;
}
