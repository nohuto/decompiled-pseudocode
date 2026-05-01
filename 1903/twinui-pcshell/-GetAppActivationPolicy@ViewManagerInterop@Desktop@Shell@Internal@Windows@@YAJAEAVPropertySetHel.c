/*
 * XREFs of ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x18027D59C
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180296D60 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C800 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::GetAppActivationPolicy(
        Windows::Internal::Shell::Desktop::ViewManagerInterop *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        unsigned __int8 *a3)
{
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING_HEADER v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v9,
    L"ApplicationMultiviewActivationPolicy",
    0x25u,
    0x24u);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this,
         v10,
         v5,
         a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
    (const char *)(unsigned int)v6);
  return v7;
}
