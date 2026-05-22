/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18005A0D4
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016BA0 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$4 @ 0x18003C3E2 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_18003C3E2.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x18009BC19 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x18009BC29 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_18009BC29.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x18009BC39 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_18009BC39.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x18009BC49 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_18009BC49.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x18009BC59 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_18009BC59.c)
 *     _GetUInt64KeyFromUInt64Value_::_1_::dtor$6 @ 0x1800A9BDC (_GetUInt64KeyFromUInt64Value_--_1_--dtor$6.c)
 *     _WGIController::NotifyAttachedAndStart_::_1_::dtor$1 @ 0x1800AA379 (_WGIController--NotifyAttachedAndStart_--_1_--dtor$1.c)
 *     _WGIController::NotifyAttachedAndStart_::_1_::dtor$2 @ 0x1800AA385 (_WGIController--NotifyAttachedAndStart_--_1_--dtor$2.c)
 *     _SpatialInteractionDevices::EnumerateDevices_::_1_::dtor$2 @ 0x1800D8299 (_SpatialInteractionDevices--EnumerateDevices_--_1_--dtor$2.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$0 @ 0x1800E3A75 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--OnDisplayChan.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$1 @ 0x1800E3A81 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E3A81.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$2 @ 0x1800E6301 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E6301.c)
 *     _MPCConstantManagerClient::OnConstantChanged_::_1_::dtor$0 @ 0x18011F050 (_MPCConstantManagerClient--OnConstantChanged_--_1_--dtor$0.c)
 *     _StringToHstringVectorParser_::_1_::dtor$1 @ 0x180120D12 (_StringToHstringVectorParser_--_1_--dtor$1.c)
 *     _StringToHstringVectorParser_::_1_::dtor$2 @ 0x180120D1E (_StringToHstringVectorParser_--_1_--dtor$2.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper_::_1_::dtor$0 @ 0x180150D9D (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--HolographicDriverHandleWrapper_.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$2 @ 0x18015426E (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_18015426E.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo_::_1_::dtor$0 @ 0x180165C6A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--FillDeviceInfo_--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
