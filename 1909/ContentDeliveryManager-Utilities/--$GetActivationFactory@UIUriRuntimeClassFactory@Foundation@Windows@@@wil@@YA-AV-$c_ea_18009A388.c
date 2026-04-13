/*
 * XREFs of ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009A388
 * Callers:
 *     _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x180099650 (_lambda_4a924f41398b24a36e92e39351e8429b_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>(const WCHAR *a1)
{
  HSTRING_HEADER *v2; // rdi
  __int64 v3; // rcx
  int ActivationFactory; // eax
  const WCHAR *v6[3]; // [rsp+28h] [rbp-50h] BYREF
  HSTRING_HEADER v7; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6[1] = (const WCHAR *)-2LL;
  v6[2] = a1;
  v6[0] = L"Windows.Foundation.Uri";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, v6);
  v3 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ActivationFactory = RoGetActivationFactory(v2[1].Reserved.Reserved1, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, a1);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x659,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    JUMPOUT(0x18009A446LL);
  }
  return a1;
}
