/*
 * XREFs of ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x1800E6EC8
 * Callers:
 *     _CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor$11 @ 0x18006B302 (_CEndpointCharacteristics--AugmentOEMSpeechProcessingSupport_--_1_--dtor$11.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0 @ 0x18006B512 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$0 @ 0x18006B524 (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0_0 @ 0x18006B536 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0_0.c)
 *     _CSpatialProperties::EnumerateSpatialEncoders_::_1_::dtor$0 @ 0x18006F460 (_CSpatialProperties--EnumerateSpatialEncoders_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x18006F480 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialAudioMSHRTF::IsTechnologySupported_::_1_::dtor$0 @ 0x18006F754 (_CSpatialAudioMSHRTF--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioDolbyAtmosMAT::IsTechnologySupported_::_1_::dtor$0 @ 0x18006F766 (_CSpatialAudioDolbyAtmosMAT--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$0 @ 0x18006F7C7 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$0.c)
 *     _std::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)__::_1_::dtor$0 @ 0x18006F80F (_std--function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_--function_bool___cdecl(WAVEFO.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$0 @ 0x1800E7764 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$0 @ 0x180121CD5 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$0 @ 0x180122E9F (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x180123BFC (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0_0 @ 0x180124CAB (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0_0.c)
 *     _IsSamplingRateBitRateSupported_::_1_::dtor$0 @ 0x180125177 (_IsSamplingRateBitRateSupported_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
