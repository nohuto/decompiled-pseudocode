/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING________Windows::Foundation::Collections::IVector_HSTRING________Windows::Internal::ComTaskPoolHandler__lambda_b07e28b8d9a43b43078b009fd4c08247___ @ 0x180117908
 * Callers:
 *     ?GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@6@@Z @ 0x18011D680 (-GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Inter.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING___________lambda_b07e28b8d9a43b43078b009fd4c08247___ @ 0x180116640 (Windows--Internal--COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows--Inte.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x180117434 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING________Windows::Foundation::Collections::IVector_HSTRING________Windows::Internal::ComTaskPoolHandler__lambda_b07e28b8d9a43b43078b009fd4c08247___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4)
{
  void *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
    v9 = Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING___________lambda_b07e28b8d9a43b43078b009fd4c08247___(
           (__int64)v7,
           a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<HSTRING__ *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVector<HSTRING__ *> *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVector`1<String>>",
           v8,
           v9);
}
