/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BBEF8
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::catch$47 @ 0x180066ECA (_Sarm--CSpatialAudioResourceManager--RegisterForApplicationPolicyChanges_--_1_--catch$47.c)
 *     _AtmosCheck::BeginAppSvcCall_::_1_::catch$18 @ 0x180068032 (_AtmosCheck--BeginAppSvcCall_--_1_--catch$18.c)
 *     _AtmosCheck::EndAppSvcCall_::_1_::catch$32 @ 0x180068127 (_AtmosCheck--EndAppSvcCall_--_1_--catch$32.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$22 @ 0x180069C08 (_CAudioSession--FinishConstruction_--_1_--catch$22.c)
 *     _CResourcePriorityTracker::AddResourcePriorityToMap_::_1_::catch$67 @ 0x18006A160 (_CResourcePriorityTracker--AddResourcePriorityToMap_--_1_--catch$67.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::catch$20 @ 0x18006A2B0 (_CProcessSubmixProxy--AddStream_--_1_--catch$20.c)
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch$27 @ 0x18006A4A0 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--catch$27.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$29 @ 0x18006A58E (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--catch$29.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::catch$7 @ 0x18006A662 (_CAudioSession--ForEachOwningProcess_--_1_--catch$7.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::catch$24 @ 0x18006A6AD (_CAudioSession--GetOwningProcesses_--_1_--catch$24.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::catch$25 @ 0x18006AEEB (_AtmosCheck--AddArrayToLicenseMap_--_1_--catch$25.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::catch$6 @ 0x18006B3DC (_EndpointDevice--InitAdapterInformation_--_1_--catch$6.c)
 *     _EndpointDevice::InitTopologyIdInfo_::_1_::catch$11 @ 0x18006B464 (_EndpointDevice--InitTopologyIdInfo_--_1_--catch$11.c)
 *     _CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::catch$47 @ 0x18006C6B0 (_CAudioSessionManagerProvider--GetAudioSessionManagerInternal_--_1_--catch$47.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::catch$21 @ 0x18006CA47 (_CAudioSessionManager--CreateAudioSession_--_1_--catch$21.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::catch$51 @ 0x18006D210 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--catch$51.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$134 @ 0x18006EF00 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--catch$134.c)
 *     _CConstraintModel::Initialize_::_1_::catch$151 @ 0x18006FAED (_CConstraintModel--Initialize_--_1_--catch$151.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch$19 @ 0x1800702F0 (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--catch$19.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::catch$22 @ 0x1800C283C (_CAudioSession--RegisterOwnerProcess_--_1_--catch$22.c)
 *     _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::catch$50 @ 0x1800C9009 (_CAudioSessionManager--RegisterDisconnectNotificationClient_--_1_--catch$50.c)
 *     _CAudioStream::RegisterStreamVolumeNotifications_::_1_::catch$21 @ 0x1800CC0D7 (_CAudioStream--RegisterStreamVolumeNotifications_--_1_--catch$21.c)
 *     AudioServerGetEndpointVpoContext$catch$30 @ 0x1800DCEAD (AudioServerGetEndpointVpoContext$catch$30.c)
 *     AudioServerGetStreamVpoContext$catch$95 @ 0x1800DDCF6 (AudioServerGetStreamVpoContext$catch$95.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::catch$20 @ 0x1800E2A49 (_CBaseStreamGroupProxy--AddStream_--_1_--catch$20.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::catch$17 @ 0x1800E3B3A (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--catch$17.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::catch$37 @ 0x1800E7ADB (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--catch$37.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::catch$95 @ 0x1800E7CF4 (_CDeviceGraphStore--GetAllStreamGroups_--_1_--catch$95.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::catch$38 @ 0x1800E7F3B (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--catch$38.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::catch$95 @ 0x1800E8154 (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--catch$95.c)
 *     _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$17 @ 0x1800E8273 (_CDeviceGraphObjectsStore--GetSaDevices_--_1_--catch$17.c)
 *     _CDeviceGraphObjectsStore::GetStreamGroupsConnectedToSaDevice_::_1_::catch$18 @ 0x1800E8393 (_CDeviceGraphObjectsStore--GetStreamGroupsConnectedToSaDevice_--_1_--catch$18.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::catch$323 @ 0x1800E89D6 (_CDeviceGraphStore--GetSubmixHelper_--_1_--catch$323.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::catch$8 @ 0x1800E8AEF (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--catch$8.c)
 *     _CDeviceGraphStore::GetSubmixesForPID_::_1_::catch$8 @ 0x1800E8BFE (_CDeviceGraphStore--GetSubmixesForPID_--_1_--catch$8.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0 @ 0x1800F15F5 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0_0 @ 0x1800F1661 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0_0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$234 @ 0x1800F1B61 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--catch$234.c)
 *     asm_GetApplicationSubmixFromId$catch$17 @ 0x1800F3014 (asm_GetApplicationSubmixFromId$catch$17.c)
 *     asm_GetApplicationSubmixes$catch$112 @ 0x1800F3304 (asm_GetApplicationSubmixes$catch$112.c)
 *     _GetRecordFromWnf_::_1_::catch$0 @ 0x1801191EB (_GetRecordFromWnf_--_1_--catch$0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::catch$26 @ 0x18013C742 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--catch$26.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800BBE88 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
