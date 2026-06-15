/*
 * XREFs of ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C550 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800521E4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x180052270 (-GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x180054100 (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x180062FDC (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 *     ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800FF480 (-AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800FF938 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800FFCC4 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x180100298 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801005A4 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801005A4.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180100DC8 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101000 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x180101460 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x180101834 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180101960 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180101A90 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101DF8 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1801020A4 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x180102224 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x1801023E0 (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180102500 (-s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1801278A8 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180127A98 (-DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyType.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180127B2C (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180127BC0 (-DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180127C54 (-DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180127CE8 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x180127EA0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x180128020 (-GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?GetCallStateSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x1801280F0 (-GetCallStateSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?GetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z @ 0x180128210 (-GetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z.c)
 *     ?GetMuteSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z @ 0x180128300 (-GetMuteSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180128498 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z @ 0x180128520 (-IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z.c)
 *     ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180128580 (-OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_.c)
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180128640 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1801286BC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180128764 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1801287D0 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180128930 (-ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 *     ?RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180128AE8 (-RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180128B78 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x180128C30 (-SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z.c)
 *     ?SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z @ 0x180128D10 (-SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z.c)
 *     ?SetVolume@PhoneCallAudio@@UEAAJM@Z @ 0x180128E20 (-SetVolume@PhoneCallAudio@@UEAAJM@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180128EB0 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180129070 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z @ 0x1801293B0 (-InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z.c)
 *     ?IsTimerStarted@RoutingTimer@@UEAAHXZ @ 0x180129420 (-IsTimerStarted@RoutingTimer@@UEAAHXZ.c)
 *     ?StartTimer@RoutingTimer@@UEAAJXZ @ 0x180129470 (-StartTimer@RoutingTimer@@UEAAJXZ.c)
 *     ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x180129520 (-StopTimer@RoutingTimer@@UEAAXXZ.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x180145C0C (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180145FB4 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ @ 0x180146140 (-IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x1801464C0 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1801470E0 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x180147160 (-ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180147634 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180147828 (-DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180147A90 (-DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180147D0C (-DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetProviderChange@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180147EF4 (-DoSetProviderChange@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 *     ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801480D0 (-GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularEnableSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180148260 (-GetCellularEnableSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180148300 (-GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801484D0 (-GetCellularRxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801485F0 (-GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801487C0 (-GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x18014892C (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?IsCellularEnabled@PhoneTopology@@UEAAHXZ @ 0x180148A90 (-IsCellularEnabled@PhoneTopology@@UEAAHXZ.c)
 *     ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180148F50 (-SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndp.c)
 *     ?SetCellularRxVolume@PhoneTopology@@UEAAJM@Z @ 0x180149570 (-SetCellularRxVolume@PhoneTopology@@UEAAJM@Z.c)
 *     ?WorkItemThreadProc@PhoneTopology@@AEAAXXZ @ 0x1801496EC (-WorkItemThreadProc@PhoneTopology@@AEAAXXZ.c)
 *     ?s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180149810 (-s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  EnterCriticalSection(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
