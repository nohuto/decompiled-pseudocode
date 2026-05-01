/*
 * XREFs of ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x18004E880
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 * Callees:
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionerPropertySetHelpers::SetAppActivationResponse(
        PositionerPropertySetHelpers *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  char v2; // bl
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING_HEADER v8; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (char)a2;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"AppActivationResponse", 0x16u, 0x15u);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(this, v9, v4, v2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC4,
    (__int64)"internal\\shell\\private\\inc\\positionerpropertysethelpers.h",
    (const char *)(unsigned int)v5);
  return v6;
}
