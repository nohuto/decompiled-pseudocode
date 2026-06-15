/*
 * XREFs of ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140004E68
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004E94 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_void_____ptr64__::_1_::dtor$2 @ 0x14001F7F4 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceModulesManager_W.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140036010 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003DF78 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult_____ptr64__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x1400496B4 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--M.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult_____ptr64__Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140049F61 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Media--.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult_____ptr64__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x14004A150 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_14004A150.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_unsigned___int64_&___ptr64__::_1_::dtor$1 @ 0x140053C56 (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryC_ea_140053C56.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
