/*
 * XREFs of ?GetTargetProcessId@PolicyRule@@UEAAKXZ @ 0x18011E640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@XZ @ 0x18006718C (-GetHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@.c)
 */

__int64 __fastcall PolicyRule::GetTargetProcessId(PolicyRule *this)
{
  _QWORD *Head; // rax

  if ( (*((_BYTE *)this + 80) & 2) == 0 )
    return 0LL;
  Head = (_QWORD *)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::GetHead((_QWORD *)this + 2);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Head + 40LL))(*Head);
}
