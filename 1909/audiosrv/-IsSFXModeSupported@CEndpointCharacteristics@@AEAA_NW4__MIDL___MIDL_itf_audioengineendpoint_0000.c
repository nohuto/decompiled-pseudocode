/*
 * XREFs of ?IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180006FCC
 * Callers:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EC0 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 * Callees:
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000DDEC (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E004 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsSFXModeSupported(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v6 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v7 = 0LL;
  if ( v6 || (_DWORD)v4 == 3 )
    v7 = 1LL;
  v9 = (__int128)*a3;
  return SystemEffectDescriptor::IsModeSupportedForStreaming((char *)this + 96 * v4 + 232, &v9, v7);
}
