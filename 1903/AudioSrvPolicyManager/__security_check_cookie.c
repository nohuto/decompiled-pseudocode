/*
 * XREFs of __security_check_cookie @ 0x1800343C0
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18000183C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180001C10 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180002260 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800029C8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002F44 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800038E4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180003DB0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800042F4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800045A8 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x1800050F0 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x1800054E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x180006FE0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x1800075E0 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AEB4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000B4D8 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     McTemplateU0zq @ 0x18000D81C (McTemplateU0zq.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x18000FCD4 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010E0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001175C (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z @ 0x1800121D0 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@K@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180012470 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800138E8 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180013EF0 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x1800148F0 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180017CC4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001B28C (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001E358 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180023290 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800238D0 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180023B80 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x180023C64 (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180023CE0 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800241D0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180024510 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025268 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x18002624C (-TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800265F0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     _lambda_d471d741133b083a671d83372ad1cc78_::operator() @ 0x180026924 (_lambda_d471d741133b083a671d83372ad1cc78_--operator().c)
 *     McTemplateU0zqq @ 0x18002805C (McTemplateU0zqq.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002A608 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18002AC58 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18002B514 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18002B970 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BA50 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BCF0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D6E8 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18002DC60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18002E4BC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18002E8A8 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18002F41C (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002F704 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18002FEAC (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800307C4 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800315AC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180031B64 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x180031D20 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180031E58 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18003210C (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032200 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x18003301C (-DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NP.c)
 *     ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180033170 (-DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180033554 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     __GSHandlerCheckCommon @ 0x180035930 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
