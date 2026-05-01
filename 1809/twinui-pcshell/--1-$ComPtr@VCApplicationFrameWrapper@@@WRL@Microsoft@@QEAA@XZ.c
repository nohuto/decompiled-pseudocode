/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180113E78
 * Callers:
 *     _CApplicationFrameService::OnChromeOffsetsChanged_::_1_::dtor$0 @ 0x1800AD810 (_CApplicationFrameService--OnChromeOffsetsChanged_--_1_--dtor$0.c)
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x1800ADBF5 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x1800ADCE1 (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService_____ptr64_IApplicationFrameManager_____ptr64_IApplicationFrame_____ptr64__::_1_::dtor$2 @ 0x1800ADD05 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_1800ADD05.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService_____ptr64_IApplicationFrameManager_____ptr64_IApplicationFrame_____ptr64_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&___ptr64_unsigned_long_const_&___ptr64__::_1_::dtor$2 @ 0x1801138C5 (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFr_ea_1801138C5.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x18011483C (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x180114D88 (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x180114EDD (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
