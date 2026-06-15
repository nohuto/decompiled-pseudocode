/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x1800C4E00
 * Callers:
 *     _CEndpointCharacteristics::RediscoverProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180068A64 (_CEndpointCharacteristics--RediscoverProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _GetEndpointFormFactor_::_1_::dtor$2 @ 0x18006D8A0 (_GetEndpointFormFactor_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$3 @ 0x18006DFA0 (_CEndpointCharacteristics--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _GetFxClsids_::_1_::dtor$2 @ 0x18006E5A0 (_GetFxClsids_--_1_--dtor$2.c)
 *     _GetFxClsids_::_1_::dtor$6 @ 0x18006E5C0 (_GetFxClsids_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$0 @ 0x18006E5E0 (_CEndpointCharacteristics--GetProcessingPeriod_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9____::_1_::dtor$2 @ 0x18006FC20 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9____-.c)
 *     _CEndpointCharacteristics::TryGetOverridingMixFormat_::_1_::dtor$1 @ 0x180072F20 (_CEndpointCharacteristics--TryGetOverridingMixFormat_--_1_--dtor$1.c)
 *     _CMonitorManager::IsRenderMirrorEnabled_::_1_::dtor$2 @ 0x1800744BF (_CMonitorManager--IsRenderMirrorEnabled_--_1_--dtor$2.c)
 *     _CVolumeSoftware::LoadVolumeState_::_1_::dtor$2 @ 0x1800C639C (_CVolumeSoftware--LoadVolumeState_--_1_--dtor$2.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$4 @ 0x1800DD9BB (_ConnectorSupportsFormat_--_1_--dtor$4.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$5 @ 0x1800DD9C7 (_ConnectorSupportsFormat_--_1_--dtor$5.c)
 *     _GetContainerProperty_::_1_::dtor$3 @ 0x1800F7C84 (_GetContainerProperty_--_1_--dtor$3.c)
 *     _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$1 @ 0x180109364 (_CMonitorManager--EnableAudioMirroringOnEndpointIfAppropriate_--_1_--dtor$1.c)
 *     _CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate_::_1_::dtor$2 @ 0x180109370 (_CMonitorManager--EnableAudioMirroringOnEndpointIfAppropriate_--_1_--dtor$2.c)
 *     _CMonitorManager::CaptureMonitor::Initialize_::_1_::dtor$5 @ 0x18010A6A9 (_CMonitorManager--CaptureMonitor--Initialize_--_1_--dtor$5.c)
 *     _CMonitorManager::IsMonitorMirrorEligible_::_1_::dtor$1 @ 0x18010A8F0 (_CMonitorManager--IsMonitorMirrorEligible_--_1_--dtor$1.c)
 *     _CMonitorManager::OnAudioMirrorEnabledChange_::_1_::dtor$4 @ 0x18010ABF7 (_CMonitorManager--OnAudioMirrorEnabledChange_--_1_--dtor$4.c)
 *     _CMonitorManager::SetMonitorMirrorEligibleProperty_::_1_::dtor$2 @ 0x18010CC87 (_CMonitorManager--SetMonitorMirrorEligibleProperty_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2____::_1_::dtor$2 @ 0x180114C36 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d_ea_180114C36.c)
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$0 @ 0x180117D7E (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$1 @ 0x180117D8A (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
