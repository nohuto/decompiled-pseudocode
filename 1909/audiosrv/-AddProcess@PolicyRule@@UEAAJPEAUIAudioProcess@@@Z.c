/*
 * XREFs of ?AddProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@@Z @ 0x180129D50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x180129D18 (-AddHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@.c)
 */

__int64 __fastcall PolicyRule::AddProcess(PolicyRule *this, struct IAudioProcess *a2, __int64 a3)
{
  ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::AddHead(
    (__int64 *)this + 2,
    (__int64)a2,
    a3);
  return 0LL;
}
