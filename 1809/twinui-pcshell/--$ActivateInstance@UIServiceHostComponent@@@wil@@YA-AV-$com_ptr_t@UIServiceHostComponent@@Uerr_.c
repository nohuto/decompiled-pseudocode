/*
 * XREFs of ??$ActivateInstance@UIServiceHostComponent@@@wil@@YA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18013586C
 * Callers:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180136EF4 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIServiceHostComponent@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008B488 (--$query@UIServiceHostComponent@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<IServiceHostComponent>(__int64 a1)
{
  HSTRING_HEADER *v2; // rdi
  int v3; // eax
  __int64 v5[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v6[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v7; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6[2] = (const WCHAR *)-2LL;
  v6[0] = L"Windows.Internal.Shell.BlueLightReduction.BlueLightReductionManager";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, v6);
  v5[0] = 0LL;
  v3 = RoActivateInstance(v2[1].Reserved.Reserved1, v5);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1650LL,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IServiceHostComponent>(v5, a1);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v5);
  return a1;
}
