/*
 * XREFs of ?RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z @ 0x18011EE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIAudioProcess@@PEAU3@@Z @ 0x1800670D8 (-Find@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U_.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800672EC (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@.c)
 */

__int64 __fastcall PolicyRule::RemoveProcess(PolicyRule *this, struct IAudioProcess *a2, bool *a3, bool *a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8

  v4 = (__int64 *)((char *)this + 16);
  v9 = ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::Find(
         (_QWORD *)this + 2,
         (__int64)a2,
         (__int64)a3);
  if ( !v9 )
    return 2147943568LL;
  ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::RemoveAt(
    v4,
    v9);
  *a3 = ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::Find(
          v4,
          (__int64)a2,
          v10) == 0LL;
  *a4 = *((_QWORD *)this + 4) == 0LL;
  return 0LL;
}
