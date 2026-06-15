/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180017F70
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18002AC58 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     GetAssignedAccessTypeForUser @ 0x1800329CC (GetAssignedAccessTypeForUser.c)
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180033430 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 *     ?Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180033940 (-Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180033B40 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x180036343 (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$8 @ 0x1800366C6 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$8.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$9 @ 0x1800366DC (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$9.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x1800367D1 (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$7 @ 0x1800367EA (_CProcess--CProcess_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$8 @ 0x180036803 (_CProcess--CProcess_--_1_--dtor$8.c)
 *     _CProcess::CProcess_::_1_::dtor$9 @ 0x18003681C (_CProcess--CProcess_--_1_--dtor$9.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$7 @ 0x180036E78 (_CApplicationManager--RpcGetProcess_--_1_--dtor$7.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$8 @ 0x180036E8A (_CApplicationManager--RpcGetProcess_--_1_--dtor$8.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$3 @ 0x180037969 (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::dtor$1 @ 0x1800379C9 (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$1 @ 0x1800379FF (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$7 @ 0x180037A35 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
