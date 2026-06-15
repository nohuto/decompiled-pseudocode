/*
 * XREFs of ??1PolicyRule@@UEAA@XZ @ 0x18011D4F0
 * Callers:
 *     ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x18011D580 (--_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z @ 0x18011D5D0 (--_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GPolicyRule@@UEAAPEAXI@Z @ 0x18011D650 (--_GPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GRemapPolicyRule@@UEAAPEAXI@Z @ 0x18011D690 (--_GRemapPolicyRule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180067284 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5.c)
 */

void __fastcall PolicyRule::~PolicyRule(PolicyRule *this)
{
  *(_QWORD *)this = &PolicyRule::`vftable';
  ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::RemoveAll((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
