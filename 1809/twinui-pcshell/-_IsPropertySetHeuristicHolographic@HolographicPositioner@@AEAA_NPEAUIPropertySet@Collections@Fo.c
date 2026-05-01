/*
 * XREFs of ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027694
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027528 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180027C80 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@@Z @ 0x1801AF5D8 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@@HolographicPositionerTelemetry@@SAX.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801B0778 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1801B3D24 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1801B71D4 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1801B744C (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall HolographicPositioner::_IsPropertySetHeuristicHolographic(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  HWND ForegroundWindow; // r14
  HRESULT v5; // eax
  int ActivationFactory; // eax
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  HRESULT v10; // eax
  __int64 v11; // r8
  int v12; // eax
  bool v13; // di
  BOOL v14; // esi
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  int v18; // edi
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-60h]
  _BYTE v21[4]; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v24; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26 = -2LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v23 = 0LL;
    string = 0LL;
    v5 = WindowsCreateStringReference(
           L"Windows.Internal.Shell.Holographic.ContextIdentifier",
           0x34u,
           &hstringHeader,
           &string);
    if ( v5 < 0 )
    {
      RaiseException(v5, 1u, 0, 0LL);
      JUMPOUT(0x1800BB28ELL);
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, &v23);
    v7 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (unsigned int)"internal\\onecoreuapshell\\inc\\holographicsession.h",
        (const char *)(unsigned int)ActivationFactory,
        v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v23 + 48LL))(
             v23,
             (unsigned int)ForegroundWindow,
             0LL,
             &v25);
      v7 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x30,
          (unsigned int)"internal\\onecoreuapshell\\inc\\holographicsession.h",
          (const char *)(unsigned int)v8,
          v20);
      v9 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    if ( v7 >= 0 && v25 == 1 )
    {
      v24 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_180400258);
      if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
             (HSTRING)v16[1].Reserved.Reserved1)
        && (v22 = 0,
            (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(this, a2, ForegroundWindow, &v22) >= 0)
        && v22 )
      {
        LODWORD(v23) = 1;
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
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
                string)
          || (v22 = 0,
              (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(
                     this,
                     a2,
                     ForegroundWindow,
                     &v22) < 0)
          || !v22 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          goto LABEL_10;
        }
        LODWORD(v23) = 0;
      }
      HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      return 1;
    }
  }
LABEL_10:
  v22 = 0;
  v24 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v10 = WindowsCreateStringReference(L"AAMShim.CallingProcessId", 0x18u, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    RaiseException(v10, 1u, 0, 0LL);
    goto LABEL_33;
  }
  v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v24, string, v11, &v22);
  string = 0LL;
  if ( v12 < 0 )
  {
LABEL_33:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    goto LABEL_17;
  }
  v13 = v22 == GetCurrentProcessId();
  if ( v24 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v13 )
    return 0;
LABEL_17:
  v14 = 0;
  if ( *((_DWORD *)this + 104) )
    return 0;
  v22 = 0;
  v21[0] = 0;
  v17 = wil::wnf_query_nothrow<unsigned long>(&WNF_HOLO_USER_DISPLAY_CONTEXT, v21, &v22);
  v18 = v17;
  if ( v17 < 0 )
  {
    v19 = 1273LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v17,
      v20);
    goto LABEL_44;
  }
  if ( v21[0] && v22 == 1 )
  {
    v17 = wil::wnf_query_nothrow<unsigned long>(&WNF_HOLO_USER_INPUT_CONTEXT, v21, &v22);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 1276LL;
      goto LABEL_37;
    }
    if ( v21[0] )
      v14 = v22 == 1;
  }
  v18 = 0;
LABEL_44:
  if ( v18 < 0 || !v14 )
    return 0;
  LODWORD(v23) = 2;
  HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v23);
  return 1;
}
