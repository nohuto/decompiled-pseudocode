/*
 * XREFs of ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14003C24C
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$0 @ 0x14001F730 (_CAudioDeviceGraph--Initialize_--_1_--dtor$0.c)
 *     _CStreamInstance::UnregisterResources_::_1_::dtor$0 @ 0x14001FBD7 (_CStreamInstance--UnregisterResources_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$2 @ 0x14001FBFB (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$2.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x1400200D0 (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$8 @ 0x140020190 (_CSubmixImpl--CreateStream_--_1_--dtor$8.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x14003D3E1 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x140040211 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$7 @ 0x140040259 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$7.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14004050F (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x140040527 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CAudioHistoryBufferManager::Add_::_1_::dtor$0 @ 0x140042628 (_CAudioHistoryBufferManager--Add_--_1_--dtor$0.c)
 *     _CAudioHistoryBufferManager::GetAudioHistoryControlForStream_::_1_::dtor$1 @ 0x140042960 (_CAudioHistoryBufferManager--GetAudioHistoryControlForStream_--_1_--dtor$1.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::AddData_::_1_::dtor$0 @ 0x14005B7ED (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCountValues_enu.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::Clear_::_1_::dtor$0 @ 0x14005BA51 (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCo_ea_14005BA51.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::Log_::_1_::dtor$0 @ 0x14005BBF0 (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCo_ea_14005BBF0.c)
 *     _CAggregateTelemetryLazyUpdate_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::SetPeriod_::_1_::dtor$0 @ 0x14005CD44 (_CAggregateTelemetryLazyUpdate_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCount.c)
 * Callees:
 *     <none>
 */

void __fastcall CSAutoLock<1>::~CSAutoLock<1>(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
