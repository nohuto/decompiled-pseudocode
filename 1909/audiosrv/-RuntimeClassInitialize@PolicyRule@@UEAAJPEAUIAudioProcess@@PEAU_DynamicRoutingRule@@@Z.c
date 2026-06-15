/*
 * XREFs of ?RuntimeClassInitialize@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18012BB90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x180129D18 (-AddHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@.c)
 */

__int64 __fastcall PolicyRule::RuntimeClassInitialize(
        PolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  struct _DynamicRoutingRule *v4; // rdi
  __int64 v5; // rax
  _OWORD *v6; // rbx
  __int128 v7; // xmm1

  v4 = a3;
  ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::AddHead(
    (__int64 *)this + 2,
    (__int64)a2,
    (__int64)a3);
  v5 = 2LL;
  v6 = (_OWORD *)((char *)this + 64);
  do
  {
    *v6 = *(_OWORD *)v4;
    v6[1] = *((_OWORD *)v4 + 1);
    v6[2] = *((_OWORD *)v4 + 2);
    v6[3] = *((_OWORD *)v4 + 3);
    v6[4] = *((_OWORD *)v4 + 4);
    v6[5] = *((_OWORD *)v4 + 5);
    v6[6] = *((_OWORD *)v4 + 6);
    v6 += 8;
    v7 = *((_OWORD *)v4 + 7);
    v4 = (struct _DynamicRoutingRule *)((char *)v4 + 128);
    *(v6 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)v4;
  *((_DWORD *)v6 + 4) = *((_DWORD *)v4 + 4);
  return 0LL;
}
