/*
 * XREFs of ??1?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CE820
 * Callers:
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18006B0BA (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x18006B314 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$4 @ 0x18006B382 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$3 @ 0x18006B3B8 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$3.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x18006B550 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$2 @ 0x18006B562 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$2 @ 0x18006B5D0 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$3 @ 0x18006B5E2 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$5 @ 0x18006B5F4 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$5.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18006C380 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _CreateSaDevice_::_1_::dtor$40 @ 0x18006DF70 (_CreateSaDevice_--_1_--dtor$40.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x18006F4A4 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$1 @ 0x18006F4B6 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x18006F4C8 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _CPolicyConfig::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$6 @ 0x1800D03FE (_CPolicyConfig--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$6.c)
 *     __lambda_fcdb45138a38d4e40f36b66b4947cbe9_::operator()_::_1_::dtor$1 @ 0x180108711 (__lambda_fcdb45138a38d4e40f36b66b4947cbe9_--operator()_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x180108F47 (_CEndpointCharacteristics--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$1 @ 0x18010974C (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$0 @ 0x18010BF28 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$2 @ 0x18010BF40 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x180112109 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>(
        __int64 a1)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
}
