/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x1800C52B0
 * Callers:
 *     _CEndpointCharacteristics::RediscoverProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180067A08 (_CEndpointCharacteristics--RediscoverProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _GetFxClsids_::_1_::dtor$2 @ 0x18006E040 (_GetFxClsids_--_1_--dtor$2.c)
 *     _GetFxClsids_::_1_::dtor$6 @ 0x18006E060 (_GetFxClsids_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$0 @ 0x18006E080 (_CEndpointCharacteristics--GetProcessingPeriod_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9____::_1_::dtor$2 @ 0x18006F6E0 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9____-.c)
 *     _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$3 @ 0x18006F740 (_CEndpointCharacteristics--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _GetEndpointFormFactor_::_1_::dtor$2 @ 0x18006F760 (_GetEndpointFormFactor_--_1_--dtor$2.c)
 *     _CMonitorManager::IsRenderMirrorEnabled_::_1_::dtor$2 @ 0x180071FD4 (_CMonitorManager--IsRenderMirrorEnabled_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::TryGetOverridingMixFormat_::_1_::dtor$1 @ 0x180073430 (_CEndpointCharacteristics--TryGetOverridingMixFormat_--_1_--dtor$1.c)
 *     _CVolumeSoftware::LoadVolumeState_::_1_::dtor$2 @ 0x1800C684C (_CVolumeSoftware--LoadVolumeState_--_1_--dtor$2.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$4 @ 0x1800DDE5B (_ConnectorSupportsFormat_--_1_--dtor$4.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$5 @ 0x1800DDE67 (_ConnectorSupportsFormat_--_1_--dtor$5.c)
 *     _GetContainerProperty_::_1_::dtor$3 @ 0x1800F8134 (_GetContainerProperty_--_1_--dtor$3.c)
 *     _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$1 @ 0x180109864 (_CMonitorManager--EnableAudioMirroringOnEndpointIfAppropriate_--_1_--dtor$1.c)
 *     _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$2 @ 0x180109870 (_CMonitorManager--EnableAudioMirroringOnEndpointIfAppropriate_--_1_--dtor$2.c)
 *     _CMonitorManager::CaptureMonitor::Initialize_::_1_::dtor$5 @ 0x18010ABA9 (_CMonitorManager--CaptureMonitor--Initialize_--_1_--dtor$5.c)
 *     _CMonitorManager::IsMonitorMirrorEligible_::_1_::dtor$1 @ 0x18010ADF0 (_CMonitorManager--IsMonitorMirrorEligible_--_1_--dtor$1.c)
 *     _CMonitorManager::OnAudioMirrorEnabledChange_::_1_::dtor$4 @ 0x18010B0F7 (_CMonitorManager--OnAudioMirrorEnabledChange_--_1_--dtor$4.c)
 *     _CMonitorManager::SetMonitorMirrorEligibleProperty_::_1_::dtor$2 @ 0x18010D187 (_CMonitorManager--SetMonitorMirrorEligibleProperty_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2____::_1_::dtor$2 @ 0x180115136 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d_ea_180115136.c)
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$0 @ 0x18011827E (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$1 @ 0x18011828A (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
