/*
 * XREFs of ??$WaitForCompletion@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@V?$ComPtr@UITitleBarFactory@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITitleBarFactory@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1801F5918
 * Callers:
 *     _lambda_4583b2cd47151c5f4a6d744938b764a0_::operator() @ 0x1801F6534 (_lambda_4583b2cd47151c5f4a6d744938b764a0_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1801F57F0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTitleBarFactory@Experience@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::WaitForCompletion<Windows::Internal::Shell::Experience::TitleBarFactory *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ITitleBarFactory>>(
        _QWORD *a1,
        __int64 a2,
        int a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Shell::Experience::TitleBarFactory *> *>(
         a2,
         a2,
         a3);
  if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 64LL))(a2, a1), v5 < 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1603LL,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  return a1;
}
