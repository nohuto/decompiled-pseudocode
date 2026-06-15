/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800E20F0
 * Callers:
 *     _EndpointDevice::InitTopologyIdInfo_::_1_::dtor$6 @ 0x18006B4E4 (_EndpointDevice--InitTopologyIdInfo_--_1_--dtor$6.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$1 @ 0x1800ED715 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$1.c)
 *     _PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor$2 @ 0x18011C8E3 (_PhoneCallAudio--SwitchActivePhoneCallEndpoint_--_1_--dtor$2.c)
 *     _PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor$6 @ 0x18011C913 (_PhoneCallAudio--SwitchActivePhoneCallEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      *(void ***)a1,
      *(void **)(a1 + 8));
}
