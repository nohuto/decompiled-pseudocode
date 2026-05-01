/*
 * XREFs of ?SetGroupingPreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ViewGrouping@ViewManagement@UI@5@@Z @ 0x180132360
 * Callers:
 *     _lambda_09d3c354ccd8b545e955a21e035f2e4b_::operator() @ 0x18038F96C (_lambda_09d3c354ccd8b545e955a21e035f2e4b_--operator().c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18007B5AC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewSizePreferenceHelpers::SetGroupingPreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        unsigned int a2)
{
  HSTRING_HEADER *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r8
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING_HEADER v9; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)off_180467720);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         a1,
         (HSTRING)v4[1].Reserved.Reserved1,
         v5,
         a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (__int64)"internal\\onecoreuapshell\\inc\\viewsizepreference.h",
    (const char *)(unsigned int)v6);
  return v7;
}
