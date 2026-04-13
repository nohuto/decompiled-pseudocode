/*
 * XREFs of ??1?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x180016F38
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$1 @ 0x1800CC9E0 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800CC9E0.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_91da0398866e2bc6f1173300c449b4ce____::_1_::dtor$1 @ 0x1800CCB4C (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING_____Windows--In.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$3 @ 0x1800CD2C7 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800CD2C7.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows::Internal::CNoResult___lambda_850a8abb65240e378f84b46c43e62dff____::_1_::dtor$0 @ 0x1800CDC37 (_Windows--Internal--COperationLambdaVar_0__lambda_850a8abb65240e378f84b46c43e62dff__Windows--Int.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_b59dbdfd0007f2d89c20db91cc7697cd____::_1_::dtor$0 @ 0x1800D0296 (_Windows--Internal--COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows--Int.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$4 @ 0x1800D19D9 (_UnlockActionHelper--Execute_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void **__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::~AsyncCallbackBase<Windows::Internal::CNoResult>(
        _QWORD *a1)
{
  void **result; // rax

  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
