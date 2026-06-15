/*
 * XREFs of ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY07_N@Z @ 0x18011DDFC
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY07_N@Z @ 0x18011DDFC (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18011F5F8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIPolicyRule@@@Z @ 0x18005C9F0 (-AddHead@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY07_N@Z @ 0x18011DDFC (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18011E06C (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011EE3C (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 */

__int64 __fastcall DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  char v7; // bp
  __int64 v10; // rdx
  unsigned int v12; // ebx
  int refreshed; // esi
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  if ( (unsigned int)a3 > 7 && (_DWORD)a3 != 0x7FFF )
  {
    v10 = 303LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a4 > 2 )
  {
    v10 = 304LL;
    goto LABEL_4;
  }
  if ( (_DWORD)a3 == 0x7FFF )
  {
    v12 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = v7;
      refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(a1, a2, v12, a4, a5, a6);
      if ( refreshed < 0 )
        break;
      if ( (int)++v12 >= 8 )
        return 0LL;
    }
    v14 = 310LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)refreshed);
    return (unsigned int)refreshed;
  }
  if ( a4 == 2 )
  {
    v15 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = v7;
      refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(a1, a2, v6, v15, a5, a6);
      if ( refreshed < 0 )
        break;
      if ( (int)++v15 >= 2 )
        return 0LL;
    }
    v14 = 317LL;
    goto LABEL_13;
  }
  v16 = (int)a3 + 8LL * (int)a4;
  v17 = (__int64 *)(48 * v16 + a1 + 56);
  if ( !(_BYTE)a2 )
  {
    v18 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
            48 * v16 + a1 + 56,
            a5);
    ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAt(
      v17,
      v18);
  }
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::AddHead(
    v17,
    a5,
    a3);
  *(_BYTE *)(v16 + a6) = 1;
  return 0LL;
}
