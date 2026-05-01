/*
 * XREFs of ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x180162620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180161A7C (--$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801622E0 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CustomShellManager::TryLaunchCustomShell(CustomShellManager *this, int *a2)
{
  const char *v3; // r9
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0;
  try
  {
    if ( CustomShellManager::IsCurrentProcessCustomShellHost(this) )
    {
      wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>((__int64)&v11);
      v10 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v10);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          78LL,
          (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
          (const char *)(unsigned int)v5);
      v6 = v10;
      if ( v10 )
      {
        *a2 = 1;
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            87LL,
            (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
            (const char *)(unsigned int)v8);
      }
      else
      {
        v7 = RtlPublishWnfStateData(WNF_CSH_LAUNCH_EXPLORER_REQUESTED, 0LL, 0LL, 0LL) | 0x10000000;
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            82LL,
            (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
            (const char *)(unsigned int)v7);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v10);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
      result = 0LL;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A,
                           (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v3);
  }
  return result;
}
