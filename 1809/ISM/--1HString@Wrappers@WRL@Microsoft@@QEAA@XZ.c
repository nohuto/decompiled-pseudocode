/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18000FE18
 * Callers:
 *     _RawInputProvidersTracing::TelemetryDdiDevice_Added__::_1_::dtor$1 @ 0x18013100D (_RawInputProvidersTracing--TelemetryDdiDevice_Added__--_1_--dtor$1.c)
 *     _RawInputProvidersTracing::TelemetryDdiDevice_Added__::_1_::dtor$2 @ 0x180131023 (_RawInputProvidersTracing--TelemetryDdiDevice_Added__--_1_--dtor$2.c)
 *     _RawInputProvidersTracing::TelemetryDdiDevice_Added__::_1_::dtor$3 @ 0x180131039 (_RawInputProvidersTracing--TelemetryDdiDevice_Added__--_1_--dtor$3.c)
 *     _RawInputProvidersTracing::TelemetryDdiDevice_Added__::_1_::dtor$4 @ 0x18013104F (_RawInputProvidersTracing--TelemetryDdiDevice_Added__--_1_--dtor$4.c)
 *     _RawInputProvidersTracing::TelemetryDdiDevice_Added__::_1_::dtor$5 @ 0x180131065 (_RawInputProvidersTracing--TelemetryDdiDevice_Added__--_1_--dtor$5.c)
 *     _GetUInt64KeyFromUInt64Value_::_1_::dtor$6 @ 0x180131844 (_GetUInt64KeyFromUInt64Value_--_1_--dtor$6.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$1 @ 0x1801333AA (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--OnDisplayChan.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$0 @ 0x1801334BD (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1801334BD.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$2 @ 0x180133517 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--TryUpdateTrac.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$4 @ 0x1801336C2 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1801336C2.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::FillDeviceInfo_::_1_::dtor$0 @ 0x180135DE1 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--FillDeviceInfo_--_1.c)
 *     _std::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper_::_Ref_count_obj_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__HSTRING_______ptr64_&___ptr64__GUID_const_&___ptr64_enum_Windows::Internal::Holographic::HandleWrapperDesiredAccess_&___ptr64_bool_&___ptr64_void_____ptr64_&___ptr64__::_1_::dtor$3 @ 0x180136153 (_std--_Ref_count_obj_Windows--Internal--Holographic--SpatialGraphDriverHandleWrappe_ea_180136153.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
