/*
 * XREFs of ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008BD94
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18008C810 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>(
        __int64 a1)
{
  HSTRING_HEADER *v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8[2] = (const WCHAR *)-2LL;
  v8[0] = L"Windows.Internal.Shell.CustomShell.CustomShellExperienceRepository";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, v8);
  v7[0] = 0LL;
  v3 = RoActivateInstance(v2[1].Reserved.Reserved1, v7);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_5:
    wil::details::in1diag3::Throw_Hr(
      v4,
      1650LL,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v7[0])(
         v7[0],
         &GUID_24c002a6_7ad5_5f1d_bfb2_89e6ce87e67a,
         a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v5);
    goto LABEL_5;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v7);
  return a1;
}
