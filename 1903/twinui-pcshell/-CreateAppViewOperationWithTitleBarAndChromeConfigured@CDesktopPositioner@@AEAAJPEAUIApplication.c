/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18003BDA8
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039980 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18009F4A4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803A0E88 (_lambda_eca460099de968d8064ce761a289067f_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803A23C0 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x18003CC3C (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18003D3A4 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180056444 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D08C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  ApplicationViewOperation *v6; // rbx
  ApplicationViewOperation *v7; // rax
  __int64 v8; // rcx
  ApplicationViewOperation *v9; // rdi
  ApplicationViewOperation *v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  CDesktopPositioner *v15; // rcx
  int v16; // eax
  struct IApplicationViewTitlebarConfiguration *v17; // rcx
  signed __int64 v18; // rax
  signed __int32 v19; // ecx
  signed __int64 v20; // rtt
  struct IApplicationViewTitlebarConfiguration *v22; // [rsp+20h] [rbp-20h] BYREF
  ApplicationViewOperation *v23; // [rsp+28h] [rbp-18h]
  __int64 v24; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  CDesktopPositioner *v26; // [rsp+88h] [rbp+48h] BYREF

  v24 = -2LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = (ApplicationViewOperation *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  v10 = 0LL;
  if ( v7 )
  {
    memset_0(v7, 0, 0x118uLL);
    v6 = ApplicationViewOperation::ApplicationViewOperation(v9);
    v23 = v6;
    v10 = v6;
  }
  if ( v10 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v8, 3u);
    *((_DWORD *)v10 + 29) = 4095;
    *((_DWORD *)v10 + 30) = 97;
    *((_DWORD *)v10 + 45) = 1;
    *((_DWORD *)v6 + 50) = 0;
    *(_QWORD *)((char *)v10 + 220) = 0LL;
    *(_QWORD *)((char *)v10 + 228) = 0LL;
    *(_QWORD *)((char *)v10 + 204) = 0LL;
    *(_QWORD *)((char *)v10 + 212) = 0LL;
    *((_BYTE *)v10 + 236) = 1;
    *((_QWORD *)v10 + 30) = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
    wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService();
    v26 = 0LL;
    v11 = (__int64 *)*((_QWORD *)this + 40);
    v12 = *v11;
    v26 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, CDesktopPositioner **))(v12 + 32))(v11, 1LL, &v26);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13,
        (int)v22);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
    }
    else
    {
      Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)v6 + 184, v26);
      v15 = v26;
      if ( v26 )
        (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v26 + 16LL))(v26);
      v22 = 0LL;
      v16 = CDesktopPositioner::_CreateTitlebarConfiguration(v15, a2, &v22);
      v14 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9ED,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v16,
          (int)v22);
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((char *)v6 + 192, v22);
        *((_DWORD *)v6 + 31) = 0;
        *a3 = v6;
        (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v6 + 8LL))(v6);
        v14 = 0;
      }
      v17 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  else
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      (int)v22);
  }
  if ( v6 )
  {
    v18 = *((_QWORD *)v6 + 8);
    while ( v18 >= 0 )
    {
      v19 = v18 - 1;
      v20 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v18 - 1, v18);
      if ( v20 == v18 )
        goto LABEL_15;
    }
    v19 = _InterlockedDecrement((volatile signed __int32 *)(2 * v18 + 16));
LABEL_15:
    if ( !v19 )
    {
      (*(void (__fastcall **)(ApplicationViewOperation *, __int64))(*(_QWORD *)v23 + 272LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v14;
}
