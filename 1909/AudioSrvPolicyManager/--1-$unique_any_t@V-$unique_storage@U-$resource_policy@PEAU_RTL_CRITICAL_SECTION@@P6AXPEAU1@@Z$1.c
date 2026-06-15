/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180008730
 * Callers:
 *     _TsSessionIdLogoff_::_1_::dtor$0 @ 0x180035C5D (_TsSessionIdLogoff_--_1_--dtor$0.c)
 *     _TsSessionIdConnect_::_1_::dtor$0 @ 0x180035C6F (_TsSessionIdConnect_--_1_--dtor$0.c)
 *     _TsSessionSendAppManagerNotification_::_1_::dtor$0 @ 0x180035CC9 (_TsSessionSendAppManagerNotification_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::dtor$0 @ 0x1800364DF (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::dtor$0 @ 0x1800369ED (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--dtor$0.c)
 *     _TsSessionIdLogon_::_1_::dtor$0 @ 0x180036C7E (_TsSessionIdLogon_--_1_--dtor$0.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$1 @ 0x180036D0C (_CApplicationManager--RpcGetProcess_--_1_--dtor$1.c)
 *     _TsSessionIdIsAScreenReaderProcess_::_1_::dtor$0 @ 0x180036E21 (_TsSessionIdIsAScreenReaderProcess_--_1_--dtor$0.c)
 *     _TsSessionLaunchBackgroundTask_::_1_::dtor$0 @ 0x180036E70 (_TsSessionLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionIdAddAppManagerClient_::_1_::dtor$0 @ 0x180036EBC (_TsSessionIdAddAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionIdTerminate_::_1_::dtor$0 @ 0x180036ECE (_TsSessionIdTerminate_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$0 @ 0x180036EE0 (_CApplicationManager--ProcessTerminated_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSoundLevel_::_1_::dtor$0 @ 0x180036F04 (_CApplicationManager--GetSoundLevel_--_1_--dtor$0.c)
 *     _TsSessionIsActiveMediaApplication_::_1_::dtor$0 @ 0x180036F4C (_TsSessionIsActiveMediaApplication_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x180036F5E (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x180036F70 (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _TsSessionIdUpdateStreamClassPolicyGains_::_1_::dtor$0 @ 0x180036F82 (_TsSessionIdUpdateStreamClassPolicyGains_--_1_--dtor$0.c)
 *     _TsSessionIdScreenReaderStateChanged_::_1_::dtor$0 @ 0x18003731C (_TsSessionIdScreenReaderStateChanged_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x180037384 (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
