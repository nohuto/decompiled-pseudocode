/*
 * XREFs of ?UpdateRule@RemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18011F9C0
 * Callers:
 *     ?UpdateRule@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x18011F5A0 (-UpdateRule@CommunicationsRemapPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIAudioProcess@@PEAU3@@Z @ 0x1800670D8 (-Find@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U_.c)
 */

__int64 __fastcall RemapPolicyRule::UpdateRule(
        RemapPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  __int64 v3; // rsi
  struct _DynamicRoutingRule *v4; // rbx
  __int64 v5; // rdx
  _OWORD *v7; // rdi
  __int128 v8; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 2LL;
  v4 = a3;
  if ( (unsigned int)(*((_DWORD *)a3 + 2) - 2) > 1 )
  {
    v5 = 622LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v5,
      (__int64)"avcore\\audiocore\\server\\AudioSrv\\inc\\defaultdevice.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *((int *)a3 + 3) >= 8 )
  {
    v5 = 623LL;
    goto LABEL_3;
  }
  v7 = (_OWORD *)((char *)this + 64);
  if ( *(_DWORD *)a3 != *((_DWORD *)this + 16) )
  {
    v5 = 624LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 17) != *((_DWORD *)a3 + 1) )
  {
    v5 = 625LL;
    goto LABEL_3;
  }
  if ( !ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::Find(
          (_QWORD *)this + 2,
          (__int64)a2,
          (__int64)a3) )
  {
    v5 = 626LL;
    goto LABEL_3;
  }
  do
  {
    *v7 = *(_OWORD *)v4;
    v7[1] = *((_OWORD *)v4 + 1);
    v7[2] = *((_OWORD *)v4 + 2);
    v7[3] = *((_OWORD *)v4 + 3);
    v7[4] = *((_OWORD *)v4 + 4);
    v7[5] = *((_OWORD *)v4 + 5);
    v7[6] = *((_OWORD *)v4 + 6);
    v7 += 8;
    v8 = *((_OWORD *)v4 + 7);
    v4 = (struct _DynamicRoutingRule *)((char *)v4 + 128);
    *(v7 - 1) = v8;
    --v3;
  }
  while ( v3 );
  *v7 = *(_OWORD *)v4;
  *((_DWORD *)v7 + 4) = *((_DWORD *)v4 + 4);
  return 0LL;
}
