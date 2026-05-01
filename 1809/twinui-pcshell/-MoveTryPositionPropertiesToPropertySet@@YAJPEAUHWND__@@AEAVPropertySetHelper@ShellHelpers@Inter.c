/*
 * XREFs of ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x18004EE4C
 * Callers:
 *     _lambda_2fe11ff52c60a5c37e661e91cf439f22_::operator() @ 0x18004CBB4 (_lambda_2fe11ff52c60a5c37e661e91cf439f22_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801118CC (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _lambda_83a37ce19c61df11147dc746175e45d2_::operator() @ 0x1801083A8 (_lambda_83a37ce19c61df11147dc746175e45d2_--operator().c)
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x1803A1840 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MoveTryPositionPropertiesToPropertySet(
        HWND a1,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  bool *v3; // r9
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  HSTRING v9; // rbx
  HSTRING v10; // rbx
  HSTRING v11; // rbx
  HSTRING v12; // rbx
  HSTRING v13; // rbx
  unsigned __int16 v14; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HWND *p_hWnd; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v18 = -2LL;
  hWnd = a1;
  if ( !(unsigned int)GetPropW(a1, L"TryPositionView") )
    return 0LL;
  p_hWnd = &hWnd;
  v17 = 1;
  LOBYTE(v14) = 0;
  if ( CallerIdentity::CheckCapabilityFromWindow((CallerIdentity *)hWnd, (HWND)&stru_18046EC18, &v14, v3) < 0
    || !(_BYTE)v14 )
  {
    goto LABEL_18;
  }
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView", 0x10u, 0xFu);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(a2, v20, v5, 1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Left", 0x15u, 0x14u);
    v9 = v20;
    GetPropW(hWnd, L"TryPositionView.Left");
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v9);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 468LL;
      goto LABEL_17;
    }
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Top", 0x14u, 0x13u);
    v10 = v20;
    GetPropW(hWnd, L"TryPositionView.Top");
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 472LL;
      goto LABEL_17;
    }
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Right", 0x16u, 0x15u);
    v11 = v20;
    GetPropW(hWnd, L"TryPositionView.Right");
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 476LL;
      goto LABEL_17;
    }
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Bottom", 0x17u, 0x16u);
    v12 = v20;
    GetPropW(hWnd, L"TryPositionView.Bottom");
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 480LL;
      goto LABEL_17;
    }
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Flags", 0x16u, 0x15u);
    v13 = v20;
    GetPropW(hWnd, L"TryPositionView.Flags");
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 484LL;
      goto LABEL_17;
    }
LABEL_18:
    v17 = 0;
    lambda_83a37ce19c61df11147dc746175e45d2_::operator()(&p_hWnd);
    return 0LL;
  }
  v8 = 464LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6);
  v17 = 0;
  lambda_83a37ce19c61df11147dc746175e45d2_::operator()(&p_hWnd);
  return v7;
}
