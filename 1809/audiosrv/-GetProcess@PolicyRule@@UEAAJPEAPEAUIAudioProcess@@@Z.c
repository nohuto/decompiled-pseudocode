/*
 * XREFs of ?GetProcess@PolicyRule@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18011E360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@XZ @ 0x18006718C (-GetHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyRule::GetProcess(PolicyRule *this, struct IAudioProcess **a2)
{
  struct IAudioProcess **Head; // rax
  struct IAudioProcess *v4; // rcx

  if ( !*((_QWORD *)this + 4) )
    return 2147943568LL;
  Head = (struct IAudioProcess **)ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::GetHead((_QWORD *)this + 2);
  v4 = *Head;
  *a2 = *Head;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v4 + 8LL))(v4);
  return 0LL;
}
