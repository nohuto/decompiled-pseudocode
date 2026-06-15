/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA178
 * Callers:
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::catch$49 @ 0x18006BC64 (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--catch$49.c)
 *     _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$17 @ 0x18006D8E8 (_CDeviceGraphObjectsStore--GetSaDevices_--_1_--catch$17.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::catch$6 @ 0x18006E0C4 (_EndpointDevice--InitAdapterInformation_--_1_--catch$6.c)
 *     _EndpointDevice::InitTopologyIdInfo_::_1_::catch$11 @ 0x18006E164 (_EndpointDevice--InitTopologyIdInfo_--_1_--catch$11.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::catch$44 @ 0x180070120 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--catch$44.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::catch$35 @ 0x180070561 (_CAudioSessionManager--CreateAudioSession_--_1_--catch$35.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$134 @ 0x180071950 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--catch$134.c)
 *     _CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::catch$46 @ 0x180072170 (_CAudioSessionManagerProvider--GetAudioSessionManagerInternal_--_1_--catch$46.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::catch$25 @ 0x180072543 (_AtmosCheck--AddArrayToLicenseMap_--_1_--catch$25.c)
 *     _CResourcePriorityTracker::AddResourcePriorityToMap_::_1_::catch$47 @ 0x1800732B0 (_CResourcePriorityTracker--AddResourcePriorityToMap_--_1_--catch$47.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::catch$7 @ 0x1800735A3 (_CAudioSession--ForEachOwningProcess_--_1_--catch$7.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::catch$24 @ 0x1800735DC (_CAudioSession--GetOwningProcesses_--_1_--catch$24.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$22 @ 0x180073888 (_CAudioSession--FinishConstruction_--_1_--catch$22.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::catch$20 @ 0x180073AD0 (_CProcessSubmixProxy--AddStream_--_1_--catch$20.c)
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch$27 @ 0x180073C40 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--catch$27.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$30 @ 0x180073D26 (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--catch$30.c)
 *     _CConstraintModel::Initialize_::_1_::catch$97 @ 0x18007453C (_CConstraintModel--Initialize_--_1_--catch$97.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch$19 @ 0x1800747B1 (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--catch$19.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::catch$22 @ 0x1800D0CB4 (_CAudioSession--RegisterOwnerProcess_--_1_--catch$22.c)
 *     _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::catch$50 @ 0x1800D7660 (_CAudioSessionManager--RegisterDisconnectNotificationClient_--_1_--catch$50.c)
 *     _CAudioStream::RegisterStreamVolumeNotifications_::_1_::catch$21 @ 0x1800DA5C7 (_CAudioStream--RegisterStreamVolumeNotifications_--_1_--catch$21.c)
 *     AudioServerGetEndpointVpoContext$catch$30 @ 0x1800E812D (AudioServerGetEndpointVpoContext$catch$30.c)
 *     AudioServerGetStreamVpoContext$catch$95 @ 0x1800E9066 (AudioServerGetStreamVpoContext$catch$95.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::catch$20 @ 0x1800EDF21 (_CBaseStreamGroupProxy--AddStream_--_1_--catch$20.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::catch$17 @ 0x1800EEC1A (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--catch$17.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::catch$37 @ 0x1800F2728 (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--catch$37.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::catch$87 @ 0x1800F2967 (_CDeviceGraphStore--GetAllStreamGroups_--_1_--catch$87.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::catch$38 @ 0x1800F2B95 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--catch$38.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::catch$87 @ 0x1800F2DC7 (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--catch$87.c)
 *     _CDeviceGraphObjectsStore::GetStreamGroupsConnectedToSaDevice_::_1_::catch$19 @ 0x1800F2F03 (_CDeviceGraphObjectsStore--GetStreamGroupsConnectedToSaDevice_--_1_--catch$19.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::catch$387 @ 0x1800F35FB (_CDeviceGraphStore--GetSubmixHelper_--_1_--catch$387.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::catch$8 @ 0x1800F370F (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--catch$8.c)
 *     _CDeviceGraphStore::GetSubmixesForPID_::_1_::catch$8 @ 0x1800F381E (_CDeviceGraphStore--GetSubmixesForPID_--_1_--catch$8.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0 @ 0x1800FCF75 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0_0 @ 0x1800FCFE1 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0_0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$234 @ 0x1800FD531 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--catch$234.c)
 *     asm_GetApplicationSubmixFromId$catch$17 @ 0x1800FEA84 (asm_GetApplicationSubmixFromId$catch$17.c)
 *     asm_GetApplicationSubmixes$catch$112 @ 0x1800FED74 (asm_GetApplicationSubmixes$catch$112.c)
 *     _CMonitorManager::CreateMonitor_::_1_::catch$6 @ 0x180107F4A (_CMonitorManager--CreateMonitor_--_1_--catch$6.c)
 *     _CMonitorManager::CreateStreamConnection_::_1_::catch$31 @ 0x18010836D (_CMonitorManager--CreateStreamConnection_--_1_--catch$31.c)
 *     _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::catch$61 @ 0x180121149 (_Sarm--CSpatialAudioResourceManager--RegisterForApplicationPolicyChanges_--_1_--catch$61.c)
 *     _GetRecordFromWnf_::_1_::catch$0 @ 0x18012586B (_GetRecordFromWnf_--_1_--catch$0.c)
 *     _AtmosCheck::BeginAppSvcCall_::_1_::catch$18 @ 0x18013DBBA (_AtmosCheck--BeginAppSvcCall_--_1_--catch$18.c)
 *     _AtmosCheck::EndAppSvcCall_::_1_::catch$32 @ 0x18013DF97 (_AtmosCheck--EndAppSvcCall_--_1_--catch$32.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::catch$26 @ 0x180140766 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--catch$26.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800CA108 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
