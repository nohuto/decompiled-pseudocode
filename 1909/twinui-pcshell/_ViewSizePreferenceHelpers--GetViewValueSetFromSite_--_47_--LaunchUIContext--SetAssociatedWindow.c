/*
 * XREFs of _ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext::SetAssociatedWindow @ 0x1803B0370
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext::SetAssociatedWindow(
        __int64 a1,
        unsigned int a2)
{
  HSTRING_HEADER *v4; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING_HEADER v9; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)off_180451670);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)(a1 + 48),
         (HSTRING)v4[1].Reserved.Reserved1,
         v5,
         a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x127,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v6);
  return v7;
}
