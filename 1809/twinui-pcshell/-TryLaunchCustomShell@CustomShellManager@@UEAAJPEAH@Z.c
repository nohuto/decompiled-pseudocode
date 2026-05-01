/*
 * XREFs of ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18008C810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ @ 0x18008A440 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ.c)
 *     ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008BD94 (--$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18008C5A0 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CustomShellManager::TryLaunchCustomShell(CustomShellManager *this, int *a2)
{
  CustomShellManager *v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0;
  if ( !wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::__private_IsEnabled((__int64)this) )
    return 0LL;
  if ( !CustomShellManager::IsCurrentProcessCustomShellHost(v3) )
    return 0LL;
  wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>((__int64)&v16);
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &v15);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      84LL,
      (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v8,
      88LL,
      (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_13;
  }
  v6 = v15;
  if ( !v15 )
  {
    v7 = RtlPublishWnfStateData(WNF_CSH_LAUNCH_EXPLORER_REQUESTED, 0LL, 0LL, 0LL) | 0x10000000;
    v8 = retaddr;
    if ( v7 >= 0 )
    {
LABEL_8:
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
      return 0LL;
    }
    goto LABEL_12;
  }
  *a2 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  v10 = retaddr;
  if ( v9 >= 0 )
    goto LABEL_8;
LABEL_13:
  wil::details::in1diag3::Throw_Hr(
    v10,
    93LL,
    (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
    (const char *)(unsigned int)v9);
  __debugbreak();
  return CustomShellManager::TryLaunchCustomShell_::_1_::dtor_0(v12, v11, v13);
}
