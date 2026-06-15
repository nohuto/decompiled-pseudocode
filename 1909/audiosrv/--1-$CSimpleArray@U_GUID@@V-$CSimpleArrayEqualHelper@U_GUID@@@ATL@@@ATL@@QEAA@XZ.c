/*
 * XREFs of ??1?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x180114D40
 * Callers:
 *     __lambda_cd418586ae46a8fc9b3fb78e22f50b3b_::operator()_::_1_::dtor$1 @ 0x18006877C (__lambda_cd418586ae46a8fc9b3fb78e22f50b3b_--operator()_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x18006DAE4 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$1 @ 0x18006DB00 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18006DB12 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x18006DB24 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18006DDC5 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$4 @ 0x18006E042 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$4.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x18006E054 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$3 @ 0x18006E08A (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$3.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x18006E358 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$2 @ 0x18006E36A (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$2 @ 0x18006E3C0 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$3 @ 0x18006E3D2 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$4 @ 0x18006E3F0 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$5 @ 0x18006E402 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$5.c)
 *     _CreateSaDevice_::_1_::dtor$132 @ 0x18006F300 (_CreateSaDevice_--_1_--dtor$132.c)
 *     _CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x180072E46 (_CEndpointCharacteristics--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$1 @ 0x180116940 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$0 @ 0x1801191C0 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$2 @ 0x1801191D8 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x18011E0F9 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>(
        __int64 a1)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
}
