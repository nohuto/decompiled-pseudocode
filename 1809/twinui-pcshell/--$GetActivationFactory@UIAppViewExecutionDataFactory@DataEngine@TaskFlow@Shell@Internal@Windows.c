/*
 * XREFs of ??$GetActivationFactory@UIAppViewExecutionDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewExecutionDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008DE14
 * Callers:
 *     ?RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITaskDataArbiter@23456@@Z @ 0x1801AD82C (-RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITa.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionDataFactory>(
        const WCHAR *a1)
{
  HSTRING_HEADER *v2; // rdi
  __int64 v3; // rcx
  int ActivationFactory; // eax
  const WCHAR *v6[4]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v7; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6[2] = (const WCHAR *)-2LL;
  v6[3] = a1;
  v6[0] = L"Windows.Internal.Shell.TaskFlow.DataEngine.AppViewExecutionData";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, v6);
  v3 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ActivationFactory = RoGetActivationFactory(v2[1].Reserved.Reserved1, &GUID_2605c085_afbf_46f6_b501_b16911939fe6, a1);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1641LL,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  return a1;
}
