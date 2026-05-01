/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180028738
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180027F40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 *     _lambda_a4c092b385a4fac3af45bae97c388695_::operator() @ 0x18033BE28 (_lambda_a4c092b385a4fac3af45bae97c388695_--operator().c)
 * Callees:
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x1800289E8 (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180028B94 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800EE350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800EE584 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  ApplicationViewOperation *v5; // rbx
  ApplicationViewOperation *v6; // rax
  ApplicationViewOperation *v7; // rdi
  ApplicationViewOperation *v8; // rsi
  unsigned int v9; // esi
  volatile int *v10; // rdx
  CDesktopPositioner *v11; // rcx
  int v12; // eax
  struct IApplicationViewTitlebarConfiguration *v13; // rdi
  struct IApplicationViewTitlebarConfiguration *v14; // rcx
  signed __int64 v15; // rax
  unsigned int v16; // ecx
  signed __int64 v17; // rtt
  int v19; // [rsp+20h] [rbp-50h]
  int v20; // [rsp+20h] [rbp-50h]
  int v21; // [rsp+30h] [rbp-40h] BYREF
  __int16 v22; // [rsp+34h] [rbp-3Ch]
  ApplicationViewOperation *v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h]
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int64 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  __int64 v29; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IApplicationViewTitlebarConfiguration *v31; // [rsp+A0h] [rbp+30h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF
  __int16 v33; // [rsp+BCh] [rbp+4Ch]

  v31 = this;
  v24 = -2LL;
  v5 = 0LL;
  v23 = 0LL;
  v6 = (ApplicationViewOperation *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    memset_0(v6, 0, 0x118uLL);
    v5 = ApplicationViewOperation::ApplicationViewOperation(v7);
    v23 = v5;
    v8 = v5;
  }
  if ( v8 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
    LODWORD(v31) = 0;
    BYTE4(v31) = 1;
    v32 = 0;
    v33 = WORD2(v31);
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
      10727725LL,
      &v32,
      0LL,
      3);
    *((_DWORD *)v8 + 29) = 255;
    *((_DWORD *)v8 + 30) = 97;
    *((_DWORD *)v8 + 44) = 1;
    *((_DWORD *)v5 + 50) = 0;
    v25 = 0LL;
    *(_QWORD *)((char *)v8 + 220) = 0LL;
    v26 = 0LL;
    *(_QWORD *)((char *)v8 + 228) = 0LL;
    v27 = 0LL;
    *(_QWORD *)((char *)v8 + 204) = 0LL;
    v28 = 0LL;
    *(_QWORD *)((char *)v8 + 212) = 0LL;
    *((_BYTE *)v8 + 236) = 1;
    v29 = 0LL;
    *((_QWORD *)v8 + 30) = 0LL;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetCachedFeatureEnabledState();
    LODWORD(v31) = 0;
    BYTE4(v31) = 2;
    v21 = 0;
    v22 = WORD2(v31);
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data,
      15441787LL,
      &v21,
      0LL,
      3);
    v31 = 0LL;
    v12 = CDesktopPositioner::_CreateTitlebarConfiguration(v11, a2, &v31);
    v9 = v12;
    v13 = v31;
    if ( v12 >= 0 )
    {
      v14 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v5 + 24);
      if ( v14 != v31 )
      {
        if ( v31 )
        {
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v31 + 8LL))(v31);
          v14 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v5 + 24);
        }
        *((_QWORD *)v5 + 24) = v13;
        if ( v14 )
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      *a3 = v5;
      (*(void (__fastcall **)(ApplicationViewOperation *))(*(_QWORD *)v5 + 8LL))(v5);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12,
        v20);
    }
    if ( v13 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E2,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      v19);
  }
  if ( v5 )
  {
    v15 = *((_QWORD *)v5 + 8);
    while ( v15 >= 0 )
    {
      if ( (_DWORD)v15 == 0x7FFFFFFF )
        return v9;
      v16 = v15 - 1;
      v17 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 8, v15 - 1, v15);
      if ( v17 == v15 )
        goto LABEL_26;
    }
    v16 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v15 + 16), v10);
LABEL_26:
    if ( !v16 )
    {
      (*(void (__fastcall **)(ApplicationViewOperation *, __int64))(*(_QWORD *)v23 + 256LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v9;
}
