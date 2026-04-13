/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff___ @ 0x1800365D8
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180029700 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult___lambda_850a8abb65240e378f84b46c43e62dff___ @ 0x1800386B8 (Windows--Internal--COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff___ea_1800386B8.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003C168 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18003C168.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  int v9; // edi
  void *v10; // rax
  __int64 v11; // rbx

  v7 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult___lambda_850a8abb65240e378f84b46c43e62dff___(
                                                   v7,
                                                   a4);
  else
    v8 = 0LL;
  *a2 = 0LL;
  if ( !v8 )
    return (unsigned int)-2147024882;
  v10 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0LL;
  if ( v10 )
    v11 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
            v10,
            a1,
            L"Windows.Foundation.IAsyncAction",
            0LL,
            -2LL);
  if ( !v11 )
  {
    (**v8)(v8, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v11 + 256) = v8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 104LL))(v11 + 8);
  if ( v9 >= 0 )
  {
    *a2 = v11 + 176;
    v11 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v11 + 8) + 16LL))(v11 + 8, *(_QWORD *)(v11 + 8));
  return (unsigned int)v9;
}
