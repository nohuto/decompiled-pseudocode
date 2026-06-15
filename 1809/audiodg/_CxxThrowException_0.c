/*
 * XREFs of _CxxThrowException_0 @ 0x14001D997
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140007AA0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BF50 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000C7B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000DAD0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001FE00 (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001FE00.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x14001FE2A (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_14001FE2A.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140020494 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--ListValue_ATL--C.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x1400204C0 (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_1400204C0.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x14002FDC0 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1400304E0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140033B8E (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElementTraits_unsig.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140033CBD (_ATL--CAtlMap_IUnknown_____ptr64_CpuManager--DeviceRegistrations--ListValue_ATL--CElementTraits_.c)
 *     _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14003492D (_ATL--CAtlMap_unsigned_long_CpuManager--HandleRegistrations--ListValue_ATL--CElemen_ea_14003492D.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x1400349D3 (_ATL--CAtlMap_IUnknown_____ptr64_CpuManager--DeviceRegistrations--ListValue_ATL--CE_ea_1400349D3.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140039F4C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003A344 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     _ATL::CAtlMap_unsigned___int64_ATL::CAtlList_CDisplayNode_____ptr64_ATL::CElementTraits_CDisplayNode_____ptr64____ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_ATL::CAtlList_CDisplayNode_____ptr64_ATL::CElementTraits_CDisplayNode_____ptr64_______::NewNode_::_1_::catch$0 @ 0x14003F75E (_ATL--CAtlMap_unsigned___int64_ATL--CAtlList_CDisplayNode_____ptr64_ATL--CElementTr_ea_14003F75E.c)
 *     _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::NewNode_::_1_::catch$0 @ 0x140042B3B (_ATL--CAtlMap_unsigned___int64_wil--com_ptr_t_ICPAudioHistoryControl_wil--err_retur_ea_140042B3B.c)
 *     _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::SetAt_::_1_::catch$0 @ 0x140042F74 (_ATL--CAtlMap_unsigned___int64_wil--com_ptr_t_ICPAudioHistoryControl_wil--err_retur_ea_140042F74.c)
 *     ??$?0V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@$0A@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x14005CF9C (--$-0V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@ut.c)
 *     _std::shared_ptr_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy___::_Setp_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy____::_1_::catch$1 @ 0x14005D224 (_std--shared_ptr_util--AtomicObj_CSpatialCrossProcessBaseEndpoint--ClockingSection_util--ReaderL.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
