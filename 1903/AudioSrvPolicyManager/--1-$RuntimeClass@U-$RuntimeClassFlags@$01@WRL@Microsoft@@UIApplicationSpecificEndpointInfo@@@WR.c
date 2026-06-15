/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationSpecificEndpointInfo@@@WRL@Microsoft@@UEAA@XZ @ 0x180008484
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$5 @ 0x180036688 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$5.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$3 @ 0x180036B9B (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_180036B9B.c)
 *     _TSSession::Create_::_1_::dtor$6 @ 0x1800371D9 (_TSSession--Create_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
