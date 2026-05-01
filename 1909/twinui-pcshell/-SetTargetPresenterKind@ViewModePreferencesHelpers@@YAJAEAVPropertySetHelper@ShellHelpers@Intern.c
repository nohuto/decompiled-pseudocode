/*
 * XREFs of ?SetTargetPresenterKind@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationWindowPresenterKind@WindowManagement@UI@5@@Z @ 0x180151B94
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180157BF4 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewModePreferencesHelpers::SetTargetPresenterKind(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        unsigned int a2)
{
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING_HEADER v8; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"ViewModePreferences.PresenterMode", 0x22u, 0x21u);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a1, v9, v4, a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"internal\\onecoreuapshell\\inc\\viewmodepreferences_propertyset.h",
      (const char *)(unsigned int)v5);
  return v6;
}
