/*
 * XREFs of ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DC98C
 * Callers:
 *     _lambda_03333eb1695976eafbeaf663887af01a_::operator() @ 0x1801D5FF0 (_lambda_03333eb1695976eafbeaf663887af01a_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIObjectWithSite@@@?$com_ptr_t@UILauncherOptions2@System@Windows@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_failfast_policy@wil@@@1@XZ @ 0x18008FD90 (--$query@UIObjectWithSite@@@-$com_ptr_t@UILauncherOptions2@System@Windows@@Uerr_failfast_policy@.c)
 *     ?GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILauncherOptions2@System@5@@Z @ 0x1801DCA1C (-GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILaunc.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GetLaunchOptionSite(
        _QWORD *a1,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a2)
{
  int LauncherOptions; // eax
  __int64 *v4; // rax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::System::ILauncherOptions2 *v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  LauncherOptions = GetLauncherOptions(a2, &v8);
  if ( LauncherOptions < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      181LL,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)(unsigned int)LauncherOptions);
    __debugbreak();
  }
  v4 = (__int64 *)wil::com_ptr_t<Windows::System::ILauncherOptions2,wil::err_failfast_policy>::query<IObjectWithSite>(
                    &v8,
                    (__int64)&v9);
  v5 = *v4;
  *v4 = 0LL;
  *a1 = v5;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v8);
  return a1;
}
