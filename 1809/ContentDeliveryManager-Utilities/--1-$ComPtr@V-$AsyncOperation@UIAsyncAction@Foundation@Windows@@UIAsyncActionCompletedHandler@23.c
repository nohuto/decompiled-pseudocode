/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001A924
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb____::_1_::dtor$0 @ 0x1800C890B (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentManagement--Ad.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_8db6d4bee1849959d8282bc6736eef1f____::_1_::dtor$0 @ 0x1800C8A61 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING_______ptr64_Win.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$3 @ 0x1800C918C (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$3.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$3 @ 0x1800C91B0 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$3.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$3 @ 0x1800C91D4 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800C91D4.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$3 @ 0x1800C91F8 (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$3.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_7d65644bff1a7e1849e627588e917516____::_1_::dtor$0 @ 0x1800C983C (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6____::_1_::dtor$0 @ 0x1800C988C (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800C988C.c)
 *     _Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800CB3A3 (_Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_3b51b811795083c8866600a62beaf61a____::_1_::dtor$0 @ 0x1800CC080 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Fou.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$4 @ 0x1800CD6B9 (_UnlockActionHelper--Execute_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
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
