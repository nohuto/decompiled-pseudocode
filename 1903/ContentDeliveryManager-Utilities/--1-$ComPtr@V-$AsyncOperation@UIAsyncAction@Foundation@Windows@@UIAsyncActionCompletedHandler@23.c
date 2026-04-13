/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001A954
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb____::_1_::dtor$4 @ 0x1800CC878 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentM_ea_1800CC878.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_91da0398866e2bc6f1173300c449b4ce____::_1_::dtor$4 @ 0x1800CC9E4 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800CC9E4.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$7 @ 0x1800CD14D (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$7.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$7 @ 0x1800CD187 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$7.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$7 @ 0x1800CD1C1 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800CD1C1.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$7 @ 0x1800CD1FB (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$7.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_850a8abb65240e378f84b46c43e62dff____::_1_::dtor$1 @ 0x1800CD8BE (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800CD8BE.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$4 @ 0x1800CD924 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800CD924.c)
 *     _Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800CF3CF (_Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_b59dbdfd0007f2d89c20db91cc7697cd____::_1_::dtor$1 @ 0x1800D00AC (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_ea_1800D00AC.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$8 @ 0x1800D1837 (_UnlockActionHelper--Execute_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::~ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
