/*
 * XREFs of ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180024B74
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180024A0C (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180018B50 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z @ 0x180053AD8 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180053C14 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@wil@@CAX_NW.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_::operator() @ 0x180178FF0 (_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_--operator().c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1801DC2D0 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@$$QEAI@Z @ 0x18021B234 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SA.c)
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18021CCA8 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x180223518 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180223C28 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x180223C58 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x180223ED8 (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall HolographicPositioner::_IsViewPropertySetHeuristicHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  const char *v6; // r9
  int LastError; // ebx
  char v8; // al
  HWND ForegroundWindow; // r14
  HRESULT v10; // eax
  HSTRING v11; // rbx
  __int64 v12; // rcx
  int ActivationFactory; // eax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  HRESULT v17; // eax
  __int64 v18; // r8
  int v19; // eax
  bool v20; // bl
  struct Windows::Foundation::Collections::IPropertySet *v21; // rcx
  int v23; // eax
  __int64 v24; // rax
  unsigned int *p_ApplicationViewUniqueIdForTracing; // rdx
  unsigned int *v26; // rcx
  int v27; // [rsp+20h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+40h] [rbp-40h] BYREF
  unsigned int ApplicationViewUniqueIdForTracing; // [rsp+48h] [rbp-38h] BYREF
  WINBOOL fPending; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v33 = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_HolographicWin32Slates>::ReportUsageToService();
  fPending = 0;
  if ( InitOnceBeginInitialize(
         &`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried,
         0,
         &fPending,
         0LL) )
  {
    if ( !fPending )
    {
LABEL_3:
      LastError = 0;
      goto LABEL_4;
    }
    v23 = lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_::operator()();
    LastError = v23;
    if ( v23 >= 0 )
    {
      InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 0, 0LL);
      goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x1CB, (unsigned int)"wil", (const char *)(unsigned int)v23, v27);
    InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 4u, 0LL);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x1C6, (unsigned int)"wil", v6);
  }
LABEL_4:
  if ( LastError < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"internal\\onecoreuapshell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)LastError,
      v27);
  if ( `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled )
  {
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v30);
    if ( v30 )
    {
      v28 = 0;
      if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v28) >= 0 && !v28 )
      {
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&v30);
        v8 = 1;
        goto LABEL_9;
      }
      if ( v30 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  v8 = 0;
LABEL_9:
  if ( v8 && !*((_BYTE *)this + 296) )
    return 0;
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow )
    goto LABEL_21;
  v29 = 0LL;
  string = 0LL;
  v10 = WindowsCreateStringReference(
          L"Windows.Internal.Shell.Holographic.ContextIdentifier",
          0x34u,
          &hstringHeader,
          &string);
  if ( v10 < 0 )
  {
    RaiseException(v10, 1u, 0, 0LL);
    JUMPOUT(0x1800F451ALL);
  }
  v11 = string;
  v12 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  ActivationFactory = RoGetActivationFactory(v11, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, &v29);
  v14 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"internal\\onecoreuapshell\\inc\\holographicsession.h",
      (const char *)(unsigned int)ActivationFactory,
      v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, WINBOOL *))(*(_QWORD *)v29 + 48LL))(
            v29,
            (unsigned int)ForegroundWindow,
            0LL,
            &fPending);
    v14 = v15;
    if ( v15 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (unsigned int)"internal\\onecoreuapshell\\inc\\holographicsession.h",
        (const char *)(unsigned int)v15,
        v27);
    v16 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  if ( v14 < 0 || fPending != 1 )
  {
LABEL_21:
    v28 = 0;
    v30 = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
    string = 0LL;
    v17 = WindowsCreateStringReference(L"AAMShim.CallingProcessId", 0x18u, &hstringHeader, &string);
    if ( v17 < 0 )
    {
      RaiseException(v17, 1u, 0, 0LL);
    }
    else
    {
      v19 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v18, &v28);
      string = 0LL;
      if ( v19 >= 0 )
      {
        v20 = v28 == GetCurrentProcessId();
        v21 = v30;
        if ( v30 )
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
        if ( v20 )
          return 0;
        goto LABEL_28;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
LABEL_28:
    if ( !*((_DWORD *)this + 110) )
    {
      LODWORD(v29) = 1;
      if ( (unsigned __int8)_QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
                              v21,
                              &v29) )
      {
        if ( HolographicPositioner::_IsInputContextHolographic(this) && !HolographicPositioner::_IsViewWin32Slate(a2) )
        {
          LODWORD(v29) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
          ApplicationViewUniqueIdForTracing = 2;
          HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
            &ApplicationViewUniqueIdForTracing,
            &v29);
          return 1;
        }
      }
    }
    return 0;
  }
  v30 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180487E18);
  if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
         *(HSTRING *)(v24 + 24))
    && (v28 = 0,
        (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(this, a3, ForegroundWindow, &v28) >= 0)
    && v28 )
  {
    ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LODWORD(v29) = 1;
    p_ApplicationViewUniqueIdForTracing = &ApplicationViewUniqueIdForTracing;
    v26 = (unsigned int *)&v29;
  }
  else
  {
    string = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"AAMShim.CallingProcessId",
      0x19u,
      0x18u);
    if ( !Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
            string)
      || (v28 = 0,
          (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(
                 this,
                 a3,
                 ForegroundWindow,
                 &v28) < 0)
      || !v28 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_21;
    }
    LODWORD(v29) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    ApplicationViewUniqueIdForTracing = 0;
    p_ApplicationViewUniqueIdForTracing = (unsigned int *)&v29;
    v26 = &ApplicationViewUniqueIdForTracing;
  }
  HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
    v26,
    p_ApplicationViewUniqueIdForTracing);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  return 1;
}
