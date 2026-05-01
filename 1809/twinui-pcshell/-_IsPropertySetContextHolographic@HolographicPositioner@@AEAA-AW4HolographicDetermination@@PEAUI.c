/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027954
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027528 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180027C80 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800697A0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1801B39C4 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall HolographicPositioner::_IsPropertySetContextHolographic(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbx
  HRESULT v5; // eax
  HSTRING v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // r14
  int v9; // eax
  HWND v10; // rcx
  char v11; // al
  HRESULT v12; // eax
  int v13; // eax
  int v14; // eax
  HWND v15; // rcx
  char v16; // al
  HRESULT v17; // eax
  __int64 v18; // r8
  char v19; // al
  unsigned __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  UINT32 v24; // edx
  HRESULT v25; // eax
  __int64 v26; // r8
  unsigned int v27; // esi
  __int64 v29; // r8
  BOOL v30; // esi
  int v31; // [rsp+20h] [rbp-60h] BYREF
  HWND v32; // [rsp+28h] [rbp-58h] BYREF
  int v33; // [rsp+30h] [rbp-50h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  int v35; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v37; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v37 = -2LL;
  v3 = a2;
  v33 = 0;
  v34 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
    goto LABEL_51;
  }
  v6 = string;
  v32 = 0LL;
  v2 = -2147467261;
  if ( !v3 )
  {
LABEL_51:
    v8 = (unsigned int)v2;
LABEL_54:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    goto LABEL_12;
  }
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v3)(v3, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v32);
  v8 = (unsigned int)v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v7,
      v31);
  else
    v8 = 0LL;
  if ( (v8 & 0x80000000) != 0LL )
    goto LABEL_54;
  v9 = (*(__int64 (__fastcall **)(HWND, HSTRING, int *))(*(_QWORD *)v32 + 64LL))(v32, v6, &v31);
  v8 = (unsigned int)v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9,
      v31);
    goto LABEL_54;
  }
  v10 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v8 = 0LL;
LABEL_12:
  if ( (v8 & 0x80000000) != 0LL || (v11 = 1, !(_BYTE)v31) )
    v11 = 0;
  if ( v11 )
    goto LABEL_69;
  string = 0LL;
  v12 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    RaiseException(v12, 1u, 0, 0LL);
  }
  else
  {
    v8 = (unsigned __int64)string;
    v32 = 0LL;
    if ( !v3 )
    {
LABEL_58:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_25;
    }
    v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v3)(
            v3,
            &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
            &v32);
    v2 = v13;
    if ( v13 >= 0 )
    {
      v2 = 0;
      goto LABEL_20;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v13,
    v31);
LABEL_20:
  if ( v2 < 0 )
    goto LABEL_58;
  v14 = (*(__int64 (__fastcall **)(HWND, unsigned __int64, int *))(*(_QWORD *)v32 + 64LL))(v32, v8, &v31);
  v2 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v14,
      v31);
    goto LABEL_58;
  }
  v15 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v2 = 0;
LABEL_25:
  if ( v2 < 0 || (v16 = 1, !(_BYTE)v31) )
    v16 = 0;
  if ( !v16 )
  {
    string = 0LL;
    v17 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
    if ( v17 < 0 )
    {
      RaiseException(v17, 1u, 0, 0LL);
      JUMPOUT(0x1800BB58DLL);
    }
    v33 = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v34, string, v18, &v35) < 0
      || (v19 = 1, v35 != 1) )
    {
      v19 = 0;
    }
    if ( v19
      && (string = 0LL,
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u),
          (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v34, string, v29, &v32) >= 0)
      && (v33 = 0,
          (int)HolographicPositioner::IsWindowManaged(
                 (HolographicPositioner *)(a1 + 136),
                 (HWND)(unsigned int)v32,
                 &v33) >= 0) )
    {
      v30 = v33 != 0;
    }
    else
    {
      string = 0LL;
      v20 = -1LL;
      do
        ++v20;
      while ( aViewsizeprefer_2[v20] );
      v21 = -1;
      if ( v20 > 0xFFFFFFFF )
      {
        RaiseException(v20 > 0xFFFFFFFF ? 0x80070216 : 0, 1u, 0, 0LL);
        JUMPOUT(0x1800BB603LL);
      }
      v22 = v20;
      v23 = v20 + 1;
      if ( v22 + 1 >= v22 )
        v21 = v22 + 1;
      if ( v23 < v22 )
      {
        RaiseException(v23 < v22 ? 0x80070216 : 0, 1u, 0, 0LL);
        JUMPOUT(0x1800BB612LL);
      }
      v24 = v21 - 1;
      if ( v22 < v21 )
        v24 = v22;
      v25 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v24, &hstringHeader, &string);
      if ( v25 < 0 )
      {
        RaiseException(v25, 1u, 0, 0LL);
        JUMPOUT(0x1800BB623LL);
      }
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v34, string, v26, &v36) < 0
        || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v36, 1LL, &v32) < 0 )
      {
        v27 = 0;
LABEL_44:
        v3 = v34;
        goto LABEL_45;
      }
      v30 = (_DWORD)v32 == 1;
    }
    v27 = v30 + 1;
    goto LABEL_44;
  }
LABEL_69:
  v27 = 2;
LABEL_45:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v27;
}
