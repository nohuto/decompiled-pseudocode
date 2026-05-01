/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002526C
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800222B0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800ADDD4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803C0378 (_lambda_eca460099de968d8064ce761a289067f_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803C18B0 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800153D8 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022BF4 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x180022E7C (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F8E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // edi
  volatile int *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  CDesktopPositioner *v16; // rcx
  int v17; // eax
  struct IApplicationViewTitlebarConfiguration *v18; // rcx
  signed __int64 v19; // rax
  unsigned int v20; // ecx
  signed __int64 v21; // rtt
  struct IApplicationViewTitlebarConfiguration *v23; // [rsp+20h] [rbp-20h] BYREF
  ApplicationViewOperation *v24; // [rsp+28h] [rbp-18h]
  __int64 v25; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  CDesktopPositioner *v27; // [rsp+88h] [rbp+48h] BYREF

  v25 = -2LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = (ApplicationViewOperation *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  v10 = 0LL;
  if ( v7 )
  {
    memset_0(v7, 0, 0x118uLL);
    v6 = ApplicationViewOperation::ApplicationViewOperation(v9);
    v24 = v6;
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
    v27 = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 40);
    v14 = *v13;
    v27 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, CDesktopPositioner **))(v14 + 32))(v13, 1LL, &v27);
    v11 = v15;
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v6 + 23, (__int64)v27);
      v16 = v27;
      if ( v27 )
        (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v27 + 16LL))(v27);
      v23 = 0LL;
      v17 = CDesktopPositioner::_CreateTitlebarConfiguration(v16, a2, &v23);
      v11 = v17;
      if ( v17 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v6 + 24, (__int64)v23);
        *((_DWORD *)v6 + 31) = 0;
        *a3 = v6;
        (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v6 + 8LL))(v6);
        v11 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9ED,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17,
          (int)v23);
      }
      v18 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15,
        (int)v23);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
    }
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D7,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      (int)v23);
  }
  if ( v6 )
  {
    v19 = *((_QWORD *)v6 + 8);
    while ( v19 >= 0 )
    {
      if ( (_DWORD)v19 == 0x7FFFFFFF )
        return v11;
      v20 = v19 - 1;
      v21 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v19 - 1, v19);
      if ( v21 == v19 )
        goto LABEL_21;
    }
    v20 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v19 + 16), v12);
LABEL_21:
    if ( !v20 )
    {
      (*(void (__fastcall **)(ApplicationViewOperation *, __int64))(*(_QWORD *)v24 + 272LL))(v24, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v11;
}
