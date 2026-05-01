/*
 * XREFs of ??1?$AutoStubBias@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@@@QEAA@XZ @ 0x1801A78CC
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1801A8E40 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewO.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_____ptr64__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x1801A9006 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_1801A9006.c)
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x1801A9170 (-FireProgress@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAVGetCurrentActivi.c)
 *     _Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_____ptr64__Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireProgress_::_1_::dtor$4 @ 0x1801A9381 (_Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncOperationCo_ea_1801A9381.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180241950 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@View.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x180241B16 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_180241B16.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>(
        int *a1)
{
  HRESULT result; // eax
  LPSTREAM v3; // rcx

  if ( a1[2] >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, 0LL, 0LL, 0LL);
    result = CoReleaseMarshalData(*(LPSTREAM *)a1);
  }
  v3 = *(LPSTREAM *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    return (*(__int64 (__fastcall **)(LPSTREAM))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
