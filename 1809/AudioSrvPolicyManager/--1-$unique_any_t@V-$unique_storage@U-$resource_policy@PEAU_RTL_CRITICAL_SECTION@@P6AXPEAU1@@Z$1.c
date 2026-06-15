/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800030C8
 * Callers:
 *     _TsSessionIdLogoff_::_1_::dtor$0 @ 0x180038373 (_TsSessionIdLogoff_--_1_--dtor$0.c)
 *     _TsSessionIdConnect_::_1_::dtor$0 @ 0x180038385 (_TsSessionIdConnect_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::dtor$0 @ 0x180038B9B (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::dtor$0 @ 0x1800390AF (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--dtor$0.c)
 *     _DoLaunchBackgroundTask_::_1_::dtor$0 @ 0x180039318 (_DoLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$1 @ 0x1800393A6 (_CApplicationManager--RpcGetProcess_--_1_--dtor$1.c)
 *     _TsSessionIdIsAScreenReaderProcess_::_1_::dtor$0 @ 0x1800394BB (_TsSessionIdIsAScreenReaderProcess_--_1_--dtor$0.c)
 *     _TsSessionIdLogon_::_1_::dtor$0 @ 0x18003950A (_TsSessionIdLogon_--_1_--dtor$0.c)
 *     _TsSessionIdAddAppManagerClient_::_1_::dtor$0 @ 0x180039556 (_TsSessionIdAddAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionIdTerminate_::_1_::dtor$0 @ 0x180039568 (_TsSessionIdTerminate_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x18003957A (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 *     _TsSessionIsActiveMediaApplication_::_1_::dtor$0 @ 0x1800395C2 (_TsSessionIsActiveMediaApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x1800395D4 (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _TsSessionIdUpdateStreamClassPolicyGains_::_1_::dtor$0 @ 0x1800395E6 (_TsSessionIdUpdateStreamClassPolicyGains_--_1_--dtor$0.c)
 *     _TsSessionSendAppManagerNotification_::_1_::dtor$0 @ 0x1800395F8 (_TsSessionSendAppManagerNotification_--_1_--dtor$0.c)
 *     _TsSessionLaunchBackgroundTask_::_1_::dtor$0 @ 0x18003997C (_TsSessionLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionIdScreenReaderStateChanged_::_1_::dtor$0 @ 0x1800399C8 (_TsSessionIdScreenReaderStateChanged_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x180039A30 (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
