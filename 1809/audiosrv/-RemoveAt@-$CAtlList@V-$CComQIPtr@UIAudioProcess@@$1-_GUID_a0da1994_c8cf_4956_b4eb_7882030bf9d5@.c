/*
 * XREFs of ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800672EC
 * Callers:
 *     ?RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z @ 0x18011EE90 (-RemoveProcess@PolicyRule@@UEAAJPEAUIAudioProcess@@PEA_N1@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::RemoveAt(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(__int64 **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  return ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_a0da1994_c8cf_4956_b4eb_7882030bf9d5>>::FreeNode(
           v2,
           a2);
}
