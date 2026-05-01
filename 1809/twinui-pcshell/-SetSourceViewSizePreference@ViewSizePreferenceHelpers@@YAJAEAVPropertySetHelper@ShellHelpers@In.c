/*
 * XREFs of ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010BDCC
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18010A120 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18032FF1C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::SetSourceViewSizePreference(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        unsigned int a2,
        unsigned int a3)
{
  HSTRING_HEADER *v6; // rax
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  HSTRING_HEADER v13; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)&off_1803FFF40);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         a1,
         (HSTRING)v6[1].Reserved.Reserved1,
         v7,
         a3);
  if ( v8 < 0 )
  {
    v9 = 210LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\inc\\viewsizepreference.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)off_1803FFF38);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         a1,
         (HSTRING)v11[1].Reserved.Reserved1,
         v12,
         a2);
  if ( v8 < 0 )
  {
    v9 = 211LL;
    goto LABEL_3;
  }
  return 0LL;
}
