/*
 * XREFs of ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140002104
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004030 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009CE0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ??$Initialize@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@2@@Z @ 0x140017724 (--$Initialize@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@.c)
 *     ?UnlockCompleteDelegate@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x14001782C (-UnlockCompleteDelegate@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResul.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_void____::_1_::dtor$2 @ 0x140019AE4 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceModulesManager_W.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400305F0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140035BD8 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003A204 (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003A3CC (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400458A4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation@PEAVM.c)
 *     ??_E?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAPEAXI@Z @ 0x140046140 (--_E-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x140047104 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--M.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140047901 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Media--.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140047AE7 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140047AE7.c)
 *     _Windows::Media::Devices::SendCommandAsyncOperation::OnStart_::_1_::dtor$1 @ 0x14004A3D8 (_Windows--Media--Devices--SendCommandAsyncOperation--OnStart_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$1 @ 0x1400518D6 (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryC_ea_1400518D6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
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
