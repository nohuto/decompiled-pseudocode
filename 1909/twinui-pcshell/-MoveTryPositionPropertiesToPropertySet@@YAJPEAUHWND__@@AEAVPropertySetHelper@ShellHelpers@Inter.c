/*
 * XREFs of ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1800565AC
 * Callers:
 *     _lambda_083b65f0a0bd48e59928c88ac5c6c8ab_::operator() @ 0x18005492C (_lambda_083b65f0a0bd48e59928c88ac5c6c8ab_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180157BF4 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _lambda_83a37ce19c61df11147dc746175e45d2_::operator() @ 0x18014D990 (_lambda_83a37ce19c61df11147dc746175e45d2_--operator().c)
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x180426BB4 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MoveTryPositionPropertiesToPropertySet(
        HWND a1,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  bool *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HSTRING v8; // rbx
  HSTRING v9; // rbx
  HSTRING v10; // rbx
  HSTRING v11; // rbx
  HSTRING v12; // rbx
  int v13; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HWND *p_hWnd; // [rsp+30h] [rbp-40h] BYREF
  char v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v17 = -2LL;
  hWnd = a1;
  if ( !(unsigned int)GetPropW(a1, L"TryPositionView") )
    return 0LL;
  p_hWnd = &hWnd;
  v16 = 1;
  LOBYTE(v13) = 0;
  if ( CallerIdentity::CheckCapabilityFromWindow(
         (CallerIdentity *)hWnd,
         (HWND)&stru_18050F710,
         (const unsigned __int16 *)&v13,
         v3) < 0
    || !(_BYTE)v13 )
  {
    goto LABEL_18;
  }
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView", 0x10u, 0xFu);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(a2, v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Left", 0x15u, 0x14u);
    v8 = v19;
    GetPropW(hWnd, L"TryPositionView.Left");
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v8);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 473LL;
      goto LABEL_17;
    }
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Top", 0x14u, 0x13u);
    v9 = v19;
    GetPropW(hWnd, L"TryPositionView.Top");
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 477LL;
      goto LABEL_17;
    }
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Right", 0x16u, 0x15u);
    v10 = v19;
    GetPropW(hWnd, L"TryPositionView.Right");
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 481LL;
      goto LABEL_17;
    }
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Bottom", 0x17u, 0x16u);
    v11 = v19;
    GetPropW(hWnd, L"TryPositionView.Bottom");
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v11);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 485LL;
      goto LABEL_17;
    }
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Flags", 0x16u, 0x15u);
    v12 = v19;
    GetPropW(hWnd, L"TryPositionView.Flags");
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 489LL;
      goto LABEL_17;
    }
LABEL_18:
    v16 = 0;
    lambda_83a37ce19c61df11147dc746175e45d2_::operator()(&p_hWnd);
    return 0LL;
  }
  v7 = 469LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5,
    v13);
  v16 = 0;
  lambda_83a37ce19c61df11147dc746175e45d2_::operator()(&p_hWnd);
  return v6;
}
