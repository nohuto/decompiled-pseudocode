/*
 * XREFs of ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003C3A0
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003B548 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003C6A0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x180200C9C (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180201440 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
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
  HRESULT v21; // eax
  __int64 v22; // r8
  unsigned int v23; // esi
  __int64 v25; // r8
  BOOL v26; // esi
  int v27; // [rsp+20h] [rbp-60h] BYREF
  HWND v28; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  int v31; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v33; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v33 = -2LL;
  v3 = a2;
  v29 = 0;
  v30 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
    goto LABEL_47;
  }
  v6 = string;
  v28 = 0LL;
  v2 = -2147467261;
  if ( !v3 )
  {
LABEL_47:
    v8 = (unsigned int)v2;
LABEL_50:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    goto LABEL_12;
  }
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v3)(v3, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v28);
  v8 = (unsigned int)v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v7,
      v27);
  else
    v8 = 0LL;
  if ( (v8 & 0x80000000) != 0LL )
    goto LABEL_50;
  v9 = (*(__int64 (__fastcall **)(HWND, HSTRING, int *))(*(_QWORD *)v28 + 64LL))(v28, v6, &v27);
  v8 = (unsigned int)v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v9,
      v27);
    goto LABEL_50;
  }
  v10 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v8 = 0LL;
LABEL_12:
  if ( (v8 & 0x80000000) != 0LL || (v11 = 1, !(_BYTE)v27) )
    v11 = 0;
  if ( v11 )
    goto LABEL_65;
  string = 0LL;
  v12 = WindowsCreateStringReference(L"DesignatedHolographicLaunch", 0x1Bu, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    RaiseException(v12, 1u, 0, 0LL);
  }
  else
  {
    v8 = (unsigned __int64)string;
    v28 = 0LL;
    if ( !v3 )
    {
LABEL_54:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_25;
    }
    v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, HWND *))v3)(
            v3,
            &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
            &v28);
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
    v27);
LABEL_20:
  if ( v2 < 0 )
    goto LABEL_54;
  v14 = (*(__int64 (__fastcall **)(HWND, unsigned __int64, int *))(*(_QWORD *)v28 + 64LL))(v28, v8, &v27);
  v2 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v14,
      v27);
    goto LABEL_54;
  }
  v15 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v2 = 0;
LABEL_25:
  if ( v2 < 0 || (v16 = 1, !(_BYTE)v27) )
    v16 = 0;
  if ( !v16 )
  {
    string = 0LL;
    v17 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
    if ( v17 < 0 )
    {
      RaiseException(v17, 1u, 0, 0LL);
      JUMPOUT(0x1800DA563LL);
    }
    v29 = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v18, &v31) < 0
      || (v19 = 1, v31 != 1) )
    {
      v19 = 0;
    }
    if ( v19
      && (string = 0LL,
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u),
          (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v25, &v28) >= 0)
      && (v29 = 0,
          (int)HolographicPositioner::IsWindowManaged(
                 (HolographicPositioner *)(a1 + 136),
                 (HWND)(unsigned int)v28,
                 &v29) >= 0) )
    {
      v26 = v29 != 0;
    }
    else
    {
      string = 0LL;
      v20 = -1LL;
      do
        ++v20;
      while ( aViewsizeprefer_1[v20] );
      if ( v20 > 0xFFFFFFFF )
      {
        RaiseException(0x80070216, 1u, 0, 0LL);
        JUMPOUT(0x1800DA62ALL);
      }
      if ( (int)v20 + 1 < (unsigned int)v20 )
      {
        RaiseException(0x80070216, 1u, 0, 0LL);
        JUMPOUT(0x1800DA616LL);
      }
      v21 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v20, &hstringHeader, &string);
      if ( v21 < 0 )
      {
        RaiseException(v21, 1u, 0, 0LL);
        JUMPOUT(0x1800DA5DBLL);
      }
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v30, string, v22, &v32) < 0
        || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(v32, 1LL, &v28) < 0 )
      {
        v23 = 0;
LABEL_40:
        v3 = v30;
        goto LABEL_41;
      }
      v26 = (_DWORD)v28 == 1;
    }
    v23 = v26 + 1;
    goto LABEL_40;
  }
LABEL_65:
  v23 = 2;
LABEL_41:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v23;
}
