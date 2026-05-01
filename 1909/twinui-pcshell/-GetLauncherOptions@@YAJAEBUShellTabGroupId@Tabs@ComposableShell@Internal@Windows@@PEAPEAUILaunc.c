/*
 * XREFs of ?GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILauncherOptions2@System@5@@Z @ 0x18024F51C
 * Callers:
 *     ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024F48C (-GetLaunchOptionSite@@YA-AV-$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUSh.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x18027A0AC (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180091310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExper.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801275FC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180248D40 (--0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

__int64 __fastcall GetLauncherOptions(
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a1,
        struct Windows::System::ILauncherOptions2 **a2)
{
  LaunchNewTabPageService *v4; // rax
  LaunchNewTabPageService *v5; // rsi
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  volatile int *v15; // rdx
  int v16; // eax
  volatile int *v17; // rdx
  struct Windows::System::ILauncherOptions2 *v18; // rax
  volatile int *v20; // rdx
  struct Windows::System::ILauncherOptions2 *v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v22[1] = -2LL;
  *a2 = 0LL;
  v21 = 0LL;
  v4 = (LaunchNewTabPageService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 && (v5 = LaunchNewTabPageService::LaunchNewTabPageService(v4, a1)) != 0LL )
  {
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.System.LauncherOptions",
      0x1Fu,
      0x1Eu);
    v6 = RoActivateInstance(v24, v22);
    if ( v6 < 0 )
      goto LABEL_18;
    v7 = *(_QWORD *)&GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v7 = *(_QWORD *)GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v7 )
    {
      v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::System::ILauncherOptions2 **))v22[0])(
             v22[0],
             &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49,
             &v21);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
      v8 = (__int64)v21;
    }
    else
    {
      v8 = v22[0];
      v21 = (struct Windows::System::ILauncherOptions2 *)v22[0];
    }
    if ( v6 < 0 )
    {
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
        (__int64)v5,
        v20);
      v12 = v6;
    }
    else
    {
      v9 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v8 + 56LL);
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180487E30);
      v11 = v9(v8, v10[1].Reserved.Reserved1);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v16 = (**(__int64 (__fastcall ***)(struct Windows::System::ILauncherOptions2 *, GUID *, __int64 *))v21)(
                v21,
                &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
                v22);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            5407LL,
            (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            (const char *)(unsigned int)v16);
        v12 = (*(__int64 (__fastcall **)(__int64, LaunchNewTabPageService *))(*(_QWORD *)v22[0] + 24LL))(v22[0], v5);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v22);
        if ( v12 >= 0 )
        {
          v18 = v21;
          v21 = 0LL;
          *a2 = v18;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
            (__int64)v5,
            v17);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
          return 0LL;
        }
        v13 = (unsigned int)v12;
        v14 = 172LL;
      }
      else
      {
        v13 = (unsigned int)v11;
        v14 = 171LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)v13);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
        (__int64)v5,
        v15);
    }
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)0x8007000ELL);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
  return (unsigned int)v12;
}
