/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x1800FB1A8
 * Callers:
 *     _GetFxClsids_::_1_::dtor$2 @ 0x18006B760 (_GetFxClsids_--_1_--dtor$2.c)
 *     _GetFxClsids_::_1_::dtor$6 @ 0x18006B7A0 (_GetFxClsids_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee____::_1_::dtor$2 @ 0x18006D7B0 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5_ea_18006D7B0.c)
 *     _CEndpointCharacteristics::GetMixFormat_::_1_::dtor$1 @ 0x18006DA70 (_CEndpointCharacteristics--GetMixFormat_--_1_--dtor$1.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsUInt32__tagpropertykey__::_1_::dtor$0 @ 0x18006DA90 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsUInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _CMonitorManager::IsRenderMirrorEnabled_::_1_::dtor$2 @ 0x18006FA4C (_CMonitorManager--IsRenderMirrorEnabled_--_1_--dtor$2.c)
 *     _CMonitorManager::IsRenderMirrorEnabled_::_1_::dtor$3 @ 0x18006FA5E (_CMonitorManager--IsRenderMirrorEnabled_--_1_--dtor$3.c)
 *     _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$1 @ 0x1800FCC0C (_CMonitorManager--EnableAudioMirroringOnEndpointIfAppropriate_--_1_--dtor$1.c)
 *     _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$2 @ 0x1800FCC18 (_CMonitorManager--EnableAudioMirroringOnEndpointIfAppropriate_--_1_--dtor$2.c)
 *     _CMonitorManager::IsMonitorMirrorEligible_::_1_::dtor$1 @ 0x1800FD7F4 (_CMonitorManager--IsMonitorMirrorEligible_--_1_--dtor$1.c)
 *     _CMonitorManager::OnAudioMirrorEnabledChange_::_1_::dtor$4 @ 0x1800FDAFA (_CMonitorManager--OnAudioMirrorEnabledChange_--_1_--dtor$4.c)
 *     _CMonitorManager::SetMonitorMirrorEligibleProperty_::_1_::dtor$2 @ 0x1800FF91F (_CMonitorManager--SetMonitorMirrorEligibleProperty_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7____::_1_::dtor$2 @ 0x1801073FF (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe484753_ea_1801073FF.c)
 *     _CEndpointCharacteristics::TryGetOverridingMixFormat_::_1_::dtor$1 @ 0x18010D5C1 (_CEndpointCharacteristics--TryGetOverridingMixFormat_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
