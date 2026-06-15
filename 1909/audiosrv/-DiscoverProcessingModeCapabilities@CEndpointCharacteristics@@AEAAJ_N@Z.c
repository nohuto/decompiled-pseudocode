/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180055D50
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052044 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000BBD4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180053820 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180054548 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005479C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180054800 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800555A4 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800556AC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180056560 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x180063628 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(
        CEndpointCharacteristics *this,
        char a2)
{
  int HostConnectorSignalProcessingModes; // ebx
  void *v5; // rcx
  unsigned int v6; // edx
  __int64 *v7; // r15
  int v8; // eax
  int ConnectorSignalProcessingModes; // ebx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  int v13; // eax
  void *v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  int v22; // ebx
  int v23; // r14d
  void *v24; // rcx
  void *v25; // rcx
  unsigned int v26; // r8d
  BOOL v27; // eax
  unsigned int i; // esi
  int APOModesSupportedForStreaming; // eax
  struct IPropertyStore *v30; // rdx
  GUID *v31; // rdx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  unsigned __int64 v41; // r9
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r9
  unsigned int v48[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *v49; // [rsp+40h] [rbp-C8h]
  struct _GUID *v50; // [rsp+48h] [rbp-C0h] BYREF
  char v51; // [rsp+50h] [rbp-B8h]
  struct _tagpropertykey v52; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+84h] [rbp-84h] BYREF
  struct _tagpropertykey v56; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v58; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v59; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v60; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID v61; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID v62; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v63; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v64; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v65; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v66[2]; // [rsp+E8h] [rbp-20h] BYREF
  struct _tagpropertykey v67; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v66[1] = (LPVOID)-2LL;
  *((_DWORD *)this + 14) = 0;
  pv = 0LL;
  *(_QWORD *)&v52.fmtid.Data1 = &pv;
  *(_QWORD *)v52.fmtid.Data4 = 0LL;
  LOBYTE(v52.pid) = 1;
  HostConnectorSignalProcessingModes = GetHostConnectorSignalProcessingModes(
                                         *((struct IPropertyStore **)this + 5),
                                         v48,
                                         (struct _GUID **)v52.fmtid.Data4);
  if ( LOBYTE(v52.pid) )
  {
    v5 = **(void ***)&v52.fmtid.Data1;
    **(_QWORD **)&v52.fmtid.Data1 = *(_QWORD *)v52.fmtid.Data4;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( HostConnectorSignalProcessingModes >= 0 )
  {
    v6 = v48[0];
    if ( v48[0] )
    {
      *((_DWORD *)this + 12) = 1;
      v7 = (__int64 *)((char *)this + 72);
      v8 = CAudioSignalProcessingModeArray::AddMultiple(
             (CEndpointCharacteristics *)((char *)this + 72),
             v6,
             (const struct _GUID *)pv);
      ConnectorSignalProcessingModes = v8;
      if ( v8 >= 0 )
        goto LABEL_7;
      v41 = (unsigned int)v8;
      v42 = 1170LL;
LABEL_116:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v42,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v41);
      goto LABEL_82;
    }
  }
  *((_DWORD *)this + 12) = 0;
  v7 = (__int64 *)((char *)this + 72);
  v43 = CAudioSignalProcessingModeArray::AddMultiple(
          (CEndpointCharacteristics *)((char *)this + 72),
          1u,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  ConnectorSignalProcessingModes = v43;
  if ( v43 < 0 )
  {
    v41 = (unsigned int)v43;
    v42 = 1175LL;
    goto LABEL_116;
  }
LABEL_7:
  v10 = pv;
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  v48[0] = 0;
  v67.fmtid.Data1 = 590439624;
  *(_DWORD *)&v67.fmtid.Data2 = 1283267372;
  *(_DWORD *)v67.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v67.fmtid.Data4[4] = 1730509416;
  v67.pid = 1;
  *(_QWORD *)&v52.fmtid.Data1 = &pv;
  *(_QWORD *)v52.fmtid.Data4 = 0LL;
  LOBYTE(v52.pid) = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 5),
                                     &v67,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     v48,
                                     (struct _GUID **)v52.fmtid.Data4);
  if ( LOBYTE(v52.pid) )
  {
    v11 = **(void ***)&v52.fmtid.Data1;
    **(_QWORD **)&v52.fmtid.Data1 = *(_QWORD *)v52.fmtid.Data4;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( ConnectorSignalProcessingModes >= 0 && v48[0] )
  {
    v44 = CAudioSignalProcessingModeArray::AddMultiple(
            (CEndpointCharacteristics *)((char *)this + 120),
            v48[0],
            (const struct _GUID *)pv);
    ConnectorSignalProcessingModes = v44;
    if ( v44 < 0 )
    {
      v41 = (unsigned int)v44;
      v42 = 1188LL;
      goto LABEL_116;
    }
    *((_DWORD *)this + 15) = 1;
  }
  else
  {
    if ( ConnectorSignalProcessingModes != -2147023728 )
    {
      if ( ConnectorSignalProcessingModes >= 0 )
        goto LABEL_82;
      v42 = 1197LL;
      goto LABEL_115;
    }
    *((_DWORD *)this + 15) = 0;
  }
  v12 = pv;
  pv = 0LL;
  if ( v12 )
    CoTaskMemFree(v12);
  v48[0] = 0;
  v13 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 13) = v13;
  if ( v13 )
  {
    *(_QWORD *)&v52.fmtid.Data1 = &pv;
    *(_QWORD *)v52.fmtid.Data4 = 0LL;
    LOBYTE(v52.pid) = 1;
    ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                       *((struct IPropertyStore **)this + 5),
                                       &v67,
                                       &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                       v48,
                                       (struct _GUID **)v52.fmtid.Data4);
    if ( LOBYTE(v52.pid) )
    {
      v14 = **(void ***)&v52.fmtid.Data1;
      **(_QWORD **)&v52.fmtid.Data1 = *(_QWORD *)v52.fmtid.Data4;
      if ( v14 )
        CoTaskMemFree(v14);
    }
    v15 = v48[0];
    if ( ConnectorSignalProcessingModes >= 0 && v48[0] )
    {
      v45 = CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + 88),
              v48[0],
              (const struct _GUID *)pv);
      ConnectorSignalProcessingModes = v45;
      if ( v45 < 0 )
      {
        v41 = (unsigned int)v45;
        v42 = 1211LL;
        goto LABEL_116;
      }
      v15 = v48[0];
LABEL_23:
      if ( v15 )
        goto LABEL_25;
      goto LABEL_24;
    }
    if ( ConnectorSignalProcessingModes == -2147023728 )
      goto LABEL_23;
    if ( ConnectorSignalProcessingModes >= 0 )
      goto LABEL_82;
    v42 = 1215LL;
LABEL_115:
    v41 = (unsigned int)ConnectorSignalProcessingModes;
    goto LABEL_116;
  }
LABEL_24:
  v16 = CAudioSignalProcessingModeArray::AddMultiple(
          (CEndpointCharacteristics *)((char *)this + 88),
          1u,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  ConnectorSignalProcessingModes = v16;
  if ( v16 < 0 )
  {
    v41 = (unsigned int)v16;
    v42 = 1222LL;
    goto LABEL_116;
  }
LABEL_25:
  v66[0] = 0LL;
  v57 = 0;
  v65 = 0LL;
  v58 = 0;
  v64 = 0LL;
  v59 = 0;
  v49 = v66;
  v50 = 0LL;
  v51 = 1;
  v56 = PKEY_CompositeFX_StreamEffectClsid;
  v52 = PKEY_FX_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v52, &v56, &v57, &v50);
  if ( v51 )
  {
    v17 = *v49;
    *v49 = v50;
    if ( v17 )
      CoTaskMemFree(v17);
  }
  v49 = &v65;
  v50 = 0LL;
  v51 = 1;
  v52 = PKEY_CompositeFX_ModeEffectClsid;
  v56 = PKEY_FX_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v56, &v52, &v58, &v50);
  if ( v51 )
  {
    v18 = *v49;
    *v49 = v50;
    if ( v18 )
      CoTaskMemFree(v18);
  }
  v49 = &v64;
  v50 = 0LL;
  v51 = 1;
  v52 = PKEY_CompositeFX_EndpointEffectClsid;
  v56 = PKEY_FX_EndpointEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v56, &v52, &v59, &v50);
  if ( v51 )
  {
    v19 = *v49;
    *v49 = v50;
    if ( v19 )
      CoTaskMemFree(v19);
  }
  v63 = 0LL;
  v54 = 0;
  v62 = 0LL;
  v55 = 0;
  v49 = &v63;
  v50 = 0LL;
  v51 = 1;
  v52 = PKEY_CompositeFX_Offload_StreamEffectClsid;
  v56 = PKEY_FX_Offload_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v56, &v52, &v54, &v50);
  if ( v51 )
  {
    v20 = *v49;
    *v49 = v50;
    if ( v20 )
      CoTaskMemFree(v20);
  }
  v49 = &v62;
  v50 = 0LL;
  v51 = 1;
  v52 = PKEY_CompositeFX_Offload_ModeEffectClsid;
  v56 = PKEY_FX_Offload_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v56, &v52, &v55, &v50);
  if ( v51 )
  {
    v21 = *v49;
    *v49 = v50;
    if ( v21 )
      CoTaskMemFree(v21);
  }
  v22 = 0;
  if ( v57 || v58 || v59 || v54 || v55 )
    v22 = 1;
  v23 = 0;
  v61 = 0LL;
  v55 = 0;
  v60 = 0LL;
  v54 = 0;
  v49 = &v61;
  v50 = 0LL;
  v51 = 1;
  memset(&v52, 0, sizeof(v52));
  v56 = PKEY_FX_PreMixEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v56, &v52, &v55, &v50);
  if ( v51 )
  {
    v24 = *v49;
    *v49 = v50;
    if ( v24 )
      CoTaskMemFree(v24);
  }
  v49 = &v60;
  v50 = 0LL;
  v51 = 1;
  memset(&v52, 0, sizeof(v52));
  v56 = PKEY_FX_PostMixEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v56, &v52, &v54, &v50);
  if ( v51 )
  {
    v25 = *v49;
    *v49 = v50;
    if ( v25 )
      CoTaskMemFree(v25);
  }
  if ( v55 == 1 || v54 == 1 )
    v23 = 1;
  v27 = *((_DWORD *)this + 12) && (v22 || !v23);
  *((_DWORD *)this + 12) = v27;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( i != 2 )
    {
      APOModesSupportedForStreaming = CEndpointCharacteristics::FixupProcessingModeSupport(this, i, v26, v23);
      ConnectorSignalProcessingModes = APOModesSupportedForStreaming;
      if ( APOModesSupportedForStreaming < 0 )
      {
        v46 = 1276LL;
        goto LABEL_111;
      }
    }
  }
  v30 = (struct IPropertyStore *)*((_QWORD *)this + 8);
  if ( v30
    && (v52 = PKEY_APO_SWFallback_ProcessingModes,
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          (CEndpointCharacteristics *)v25,
                                          v30,
                                          &v52,
                                          0,
                                          (CEndpointCharacteristics *)((char *)this + 1560)),
        ConnectorSignalProcessingModes = APOModesSupportedForStreaming,
        APOModesSupportedForStreaming < 0) )
  {
    v46 = 1282LL;
  }
  else if ( a2
         && (APOModesSupportedForStreaming = CEndpointCharacteristics::AddOsProcessingModeSupport(this),
             ConnectorSignalProcessingModes = APOModesSupportedForStreaming,
             APOModesSupportedForStreaming < 0) )
  {
    v46 = 1288LL;
  }
  else
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v7,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v7,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        v31 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v7, 0);
      else
        v31 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    v56.fmtid = *v31;
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)this + 136, &v56) )
    {
      ConnectorSignalProcessingModes = -2147024882;
      v47 = 2147942414LL;
      v46 = 1300LL;
      goto LABEL_112;
    }
    v56.fmtid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    APOModesSupportedForStreaming = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(
                                      (CEndpointCharacteristics *)((char *)this + 616),
                                      &v56.fmtid);
    ConnectorSignalProcessingModes = APOModesSupportedForStreaming;
    if ( APOModesSupportedForStreaming >= 0 )
    {
      ConnectorSignalProcessingModes = 0;
      goto LABEL_68;
    }
    v46 = 1303LL;
  }
LABEL_111:
  v47 = (unsigned int)APOModesSupportedForStreaming;
LABEL_112:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v46,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v47);
LABEL_68:
  v32 = v60;
  v60 = 0LL;
  if ( v32 )
    CoTaskMemFree(v32);
  v33 = v61;
  v61 = 0LL;
  if ( v33 )
    CoTaskMemFree(v33);
  v34 = v62;
  v62 = 0LL;
  if ( v34 )
    CoTaskMemFree(v34);
  v35 = v63;
  v63 = 0LL;
  if ( v35 )
    CoTaskMemFree(v35);
  v36 = v64;
  v64 = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
  v37 = v65;
  v65 = 0LL;
  if ( v37 )
    CoTaskMemFree(v37);
  v38 = v66[0];
  v66[0] = 0LL;
  if ( v38 )
    CoTaskMemFree(v38);
LABEL_82:
  v39 = pv;
  pv = 0LL;
  if ( v39 )
    CoTaskMemFree(v39);
  return (unsigned int)ConnectorSignalProcessingModes;
}
