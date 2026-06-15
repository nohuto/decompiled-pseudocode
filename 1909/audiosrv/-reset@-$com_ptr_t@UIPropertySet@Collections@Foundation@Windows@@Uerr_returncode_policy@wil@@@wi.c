/*
 * XREFs of ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180011CE0 (AudioServerIsFormatSupported.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18001FE20 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180033F80 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&_::Run @ 0x180048C40 (wil--details--functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__-_--Run.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18004A610 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x18004E070 (-OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180058D30 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D8410 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800D9BAC (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800D9C44 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800D9F44 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800DA260 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x1800E3FC0 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?PreStartStream@CVADServer@@UEAAJXZ @ 0x1800E59F0 (-PreStartStream@CVADServer@@UEAAJXZ.c)
 *     asm_GetApplicationSubmixContext @ 0x1800FE470 (asm_GetApplicationSubmixContext.c)
 *     asm_GetApplicationSubmixContextForProcessTree @ 0x1800FE5E0 (asm_GetApplicationSubmixContextForProcessTree.c)
 *     asm_GetApplicationSubmixContextFromPID @ 0x1800FE760 (asm_GetApplicationSubmixContextFromPID.c)
 *     ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x180103D58 (-RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z.c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1801177CC (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180120EE8 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801221FC (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180123FC0 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18012429C (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 *     ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x180125BD0 (-OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x180126DFC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 *     wil::details::lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___::_lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___ @ 0x1801273C4 (wil--details--lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___--_lambda_call__lambda_7479.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x180127A60 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18012827C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180128A70 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18012A36C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18012A5B4 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x18012A87C (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18012A9E4 (-GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x18012AFB0 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18012B3A4 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x18012BAC8 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18012C0A8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 *     ?OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x18012CF50 (-OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 *     ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012D2A0 (-RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule.c)
 *     ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x18012D520 (-OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
