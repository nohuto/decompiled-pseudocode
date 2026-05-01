/*
 * XREFs of ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803C0DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x180132B44 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  CDesktopPositioner *v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22 = -2LL;
  if ( !*(_DWORD *)(a1 + 252) )
    return 0LL;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  if ( !CDesktopPositioner::HasWindowingEnvironmentManager(v7, v6, v8) || (a3 & 0x38) == 0 )
    return 0LL;
  v20 = 0LL;
  v9 = *(__int64 **)(a1 + 176);
  v10 = *v9;
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v10 + 32))(v9, 1LL, &v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 979LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
    return v12;
  }
  v21 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 982LL;
    goto LABEL_8;
  }
  if ( v21 )
  {
    v24 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v24);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3DC,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
    v16 = *v20;
    v23 = v24;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v16 + 56))(v20, a2, &v23, 1LL);
    v18 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_18;
    v19 = 989LL;
  }
  else
  {
    if ( (a3 & 0x20) == 0 )
      goto LABEL_18;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v20 + 64))(v20, a2);
    v18 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_18;
    v19 = 994LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v18,
    (void *)v19,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v17);
LABEL_18:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
  return 0LL;
}
