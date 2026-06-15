/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B180
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x1800388FF (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$8 @ 0x180038C85 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$8.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$9 @ 0x180038C9B (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$9.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x180038D90 (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$7 @ 0x180038DA9 (_CProcess--CProcess_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$8 @ 0x180038DC2 (_CProcess--CProcess_--_1_--dtor$8.c)
 *     _CProcess::CProcess_::_1_::dtor$9 @ 0x180038DDB (_CProcess--CProcess_--_1_--dtor$9.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$7 @ 0x180039412 (_CApplicationManager--RpcGetProcess_--_1_--dtor$7.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$8 @ 0x180039424 (_CApplicationManager--RpcGetProcess_--_1_--dtor$8.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$3 @ 0x180039F0C (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::dtor$1 @ 0x180039F6C (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$1 @ 0x180039FB4 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$7 @ 0x180039FD8 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
