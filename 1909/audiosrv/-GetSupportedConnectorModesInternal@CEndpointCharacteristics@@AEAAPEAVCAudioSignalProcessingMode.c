/*
 * XREFs of ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000F54C
 * Callers:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180005A8C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006738 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006BA4 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007230 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18000DFA4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180052AC0 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000F630 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSupportedConnectorModesInternal(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  BOOL v7; // ebx
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = a2;
  if ( !a2 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = 1;
    if ( v6 )
    {
      pvar = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(
             v6,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v7 = v10 == 0;
      }
      PropVariantClear(&pvar);
      if ( !v7 )
        return a1 + 136;
    }
  }
  if ( !a3 )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v3 + a1 + 232));
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v3 + a1 + 616));
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v3 + a1 + 1000));
  }
  return 16 * v3 + a1 + 72;
}
