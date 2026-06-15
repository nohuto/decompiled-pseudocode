/*
 * XREFs of ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003420 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400063F0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009C90 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000A740 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140010140 (-RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140016230 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140018290 (-AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$2 @ 0x14001F750 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$2.c)
 *     _CSubmixImpl::UpdateActiveStreamCount_::_1_::dtor$0 @ 0x14001F850 (_CSubmixImpl--UpdateActiveStreamCount_--_1_--dtor$0.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$3 @ 0x14001F870 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$3.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$4 @ 0x14001F890 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$4.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$5 @ 0x14001F8B0 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$5.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$6 @ 0x14001F8D0 (_CSubmixImpl--CreateStream_--_1_--dtor$6.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$1 @ 0x14001F930 (_CSubmixImpl--Initialize_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$16 @ 0x14001F970 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$16.c)
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$1 @ 0x140020220 (_CPipeInstance--ActivateAPOs_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$0 @ 0x1400202F0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$1 @ 0x140020310 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$2 @ 0x140020330 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$2.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$4 @ 0x140020370 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$4.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x140020430 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$19 @ 0x140020470 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$19.c)
 *     _CStreamInstance::ConnectToRightSubmix_::_1_::dtor$0 @ 0x140020F9D (_CStreamInstance--ConnectToRightSubmix_--_1_--dtor$0.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$2 @ 0x14004021D (_CStreamGroup--CreateBridgeStream_--_1_--dtor$2.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$3 @ 0x140040229 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$3.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$5 @ 0x140040241 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$5.c)
 *     ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x140040CE0 (-Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z.c)
 *     _CVpoContext::Initialize_::_1_::dtor$0 @ 0x140040E08 (_CVpoContext--Initialize_--_1_--dtor$0.c)
 *     AudioDGGetVpoFromVpoContext @ 0x140041280 (AudioDGGetVpoFromVpoContext.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400416A0 (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 *     _CStreamInstance::GetOta_::_1_::dtor$0 @ 0x140041850 (_CStreamInstance--GetOta_--_1_--dtor$0.c)
 *     _CStreamInstance::GetOta_::_1_::dtor$1 @ 0x14004185C (_CStreamInstance--GetOta_--_1_--dtor$1.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11@Z @ 0x140041AC0 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11@Z.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140041E20 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_K0@Z @ 0x1400424D0 (-Add@CAudioHistoryBufferManager@@QEAAJ_K0@Z.c)
 *     _CAudioHistoryBufferManager::Add_::_1_::dtor$1 @ 0x140042634 (_CAudioHistoryBufferManager--Add_--_1_--dtor$1.c)
 *     ?FreeNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400427E4 (-FreeNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x140042868 (-GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryContro.c)
 *     _CAudioHistoryBufferManager::GetAudioHistoryControlForStream_::_1_::dtor$0 @ 0x140042954 (_CAudioHistoryBufferManager--GetAudioHistoryControlForStream_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
