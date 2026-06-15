/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180056E3C
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800574E0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180037F34 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x180055F2C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x180056114 (-GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180056A74 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x180056D34 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18005729C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180057CF0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18011E138 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        int a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  __int64 v7; // r14
  struct _GUID *v8; // rsi
  int v9; // r12d
  struct IPropertyStore *v10; // rdx
  unsigned __int64 v11; // rcx
  GUID v12; // xmm0
  DWORD v13; // eax
  int APOModesSupportedForStreaming; // eax
  unsigned int v15; // r14d
  unsigned __int64 v16; // rcx
  GUID v17; // xmm0
  DWORD v18; // eax
  int v19; // eax
  CEndpointCharacteristics *v20; // rcx
  GUID v21; // xmm0
  DWORD v22; // eax
  int v23; // eax
  void *v24; // rdi
  struct _GUID *v25; // rbx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  GUID v28; // xmm1
  DWORD v29; // ecx
  int ConnectorFXModeEffectPKEY; // eax
  CEndpointCharacteristics *v31; // rcx
  int v32; // r14d
  GUID v34; // xmm0
  DWORD v35; // eax
  GUID v36; // xmm1
  DWORD v37; // ecx
  _QWORD *v38; // rax
  __int64 v39; // rbx
  int v40; // eax
  unsigned int v41; // ebx
  struct _GUID *v42; // rdi
  int v43; // eax
  unsigned int v44; // esi
  struct _GUID *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r9
  __int64 v50; // rdx
  _OWORD *v51; // rax
  struct _tagpropertykey v52; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID *v53[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _tagpropertykey v54; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v55; // [rsp+90h] [rbp-70h] BYREF
  int v56[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int64 v60[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _tagpropertykey v61; // [rsp+D0h] [rbp-30h] BYREF
  struct _tagpropertykey v62; // [rsp+F0h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+118h] [rbp+18h]
  struct _GUID *v65; // [rsp+120h] [rbp+20h] BYREF
  SystemEffectDescriptor *v66; // [rsp+128h] [rbp+28h]
  __int64 v67; // [rsp+130h] [rbp+30h]
  __int64 v68[15]; // [rsp+138h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]
  struct _GUID *v70; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v71; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v72; // [rsp+1D0h] [rbp+D0h] BYREF

  v72 = a3;
  v67 = -2LL;
  v5 = a2;
  v7 = a2;
  v8 = 0LL;
  if ( !*((_DWORD *)this + a2 + 12) )
  {
    if ( a2 != 3 )
    {
      v39 = 16LL * a2;
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + v39 + 72);
      v40 = CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + v39 + 72),
              1u,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v41 = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x871,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v40);
        return v41;
      }
      if ( a4 && !(_DWORD)v5 )
      {
        v70 = 0LL;
        v72 = 0;
        v53[0] = 0LL;
        v71 = 0;
        memset(&v52, 0, sizeof(v52));
        v54 = PKEY_FX_PreMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v54, &v52, &v72, &v70);
        memset(&v52, 0, sizeof(v52));
        v54 = PKEY_FX_PostMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v54, &v52, &v71, v53);
        v55 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v42 = v70;
        v43 = SystemEffectDescriptor::SetDefaultEffectChain(
                (CEndpointCharacteristics *)((char *)this + 96 * v5 + 232),
                &v55,
                v72,
                v70);
        v44 = v43;
        v45 = v53[0];
        if ( v43 >= 0 )
        {
          v55 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v43 = SystemEffectDescriptor::SetDefaultEffectChain(
                  (CEndpointCharacteristics *)((char *)this + 96 * v5 + 616),
                  &v55,
                  v71,
                  v53[0]);
          v44 = v43;
          if ( v43 >= 0 )
          {
            CoTaskMemFree(v45);
            CoTaskMemFree(v42);
            return 0LL;
          }
          v46 = 2179LL;
        }
        else
        {
          v46 = 2178LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v46,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v43);
        CoTaskMemFree(v45);
        CoTaskMemFree(v42);
        return v44;
      }
    }
    return 0LL;
  }
  if ( (a2 & 0xFFFFFFFC) != 0 || a2 == 2 )
    return 0LL;
  *(_QWORD *)v56 = 0LL;
  v9 = 0;
  v57 = 0LL;
  v60[0] = 0LL;
  v60[1] = 0LL;
  *(_QWORD *)&v55.Data1 = 0LL;
  *(_QWORD *)v55.Data4 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v10 = (struct IPropertyStore *)*((_QWORD *)this + 8);
  if ( !v10 )
  {
LABEL_18:
    v53[0] = 0LL;
    v72 = 0;
    v24 = 0LL;
    pv = 0LL;
    v71 = 0;
    v25 = 0LL;
    v65 = 0LL;
    LODWORD(v70) = 0;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
        pid = PKEY_FX_Offload_StreamEffectClsid.pid;
        v28 = PKEY_CompositeFX_Offload_StreamEffectClsid.fmtid;
        v29 = PKEY_CompositeFX_Offload_StreamEffectClsid.pid;
      }
      else
      {
        if ( (_DWORD)v5 != 3 )
        {
          v15 = -2147023728;
          v49 = 2147943568LL;
          v50 = 2222LL;
LABEL_71:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v50,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v49);
          CoTaskMemFree(v25);
          CoTaskMemFree(v24);
          CoTaskMemFree(v8);
          goto LABEL_72;
        }
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        v28 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.fmtid;
        v29 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.pid;
      }
    }
    else
    {
      fmtid = PKEY_FX_StreamEffectClsid.fmtid;
      pid = PKEY_FX_StreamEffectClsid.pid;
      v28 = PKEY_CompositeFX_StreamEffectClsid.fmtid;
      v29 = PKEY_CompositeFX_StreamEffectClsid.pid;
    }
    v52.fmtid = fmtid;
    v52.pid = pid;
    v54.fmtid = v28;
    v54.pid = v29;
    v61.fmtid = v28;
    v61.pid = v29;
    v62.fmtid = fmtid;
    v62.pid = pid;
    GetFxClsids(*((struct IMMDevice **)this + 2), &v62, &v61, &v72, v53);
    v64 = 96 * v7;
    v8 = v53[0];
    ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                  (CEndpointCharacteristics *)((char *)this + 96 * v7 + 232),
                                  (struct CAudioSignalProcessingModeArray *)v56,
                                  v72,
                                  v53[0]);
    v15 = ConnectorFXModeEffectPKEY;
    if ( ConnectorFXModeEffectPKEY < 0 )
    {
      v50 = 2224LL;
    }
    else
    {
      ConnectorFXModeEffectPKEY = CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
                                    v31,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                    &v52,
                                    &v54);
      v15 = ConnectorFXModeEffectPKEY;
      if ( ConnectorFXModeEffectPKEY < 0 )
      {
        v50 = 2226LL;
      }
      else
      {
        v62 = v54;
        v61 = v52;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v61, &v62, &v71, (struct _GUID **)&pv);
        v66 = (CEndpointCharacteristics *)((char *)this + v64 + 616);
        v24 = pv;
        ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                      v66,
                                      (struct CAudioSignalProcessingModeArray *)v60,
                                      v71,
                                      (const struct _GUID *)pv);
        v15 = ConnectorFXModeEffectPKEY;
        if ( ConnectorFXModeEffectPKEY < 0 )
        {
          v50 = 2228LL;
        }
        else
        {
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != 3 )
              goto LABEL_26;
            v34 = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
            v35 = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
            v36 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.fmtid;
            v37 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.pid;
          }
          else
          {
            v34 = PKEY_FX_EndpointEffectClsid.fmtid;
            v35 = PKEY_FX_EndpointEffectClsid.pid;
            v36 = PKEY_CompositeFX_EndpointEffectClsid.fmtid;
            v37 = PKEY_CompositeFX_EndpointEffectClsid.pid;
          }
          v62.fmtid = v36;
          v62.pid = v37;
          v61.fmtid = v34;
          v61.pid = v35;
          GetFxClsids(*((struct IMMDevice **)this + 2), &v61, &v62, (unsigned int *)&v70, &v65);
          v25 = v65;
          ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                        (CEndpointCharacteristics *)((char *)this + v64 + 1000),
                                        (struct CAudioSignalProcessingModeArray *)&v55,
                                        (unsigned int)v70,
                                        v65);
          v15 = ConnectorFXModeEffectPKEY;
          if ( ConnectorFXModeEffectPKEY >= 0 )
          {
LABEL_26:
            v32 = 0;
            if ( v9 > 0 )
            {
              do
              {
                v38 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                  (__int64)v56,
                                  v32);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v60, v38) == -1 )
                {
                  v51 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                    (__int64)v56,
                                    v32);
                  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                        (__int64)&v58,
                                        v51) )
                  {
                    v15 = -2147024882;
                    v49 = 2147942414LL;
                    v50 = 2251LL;
                    goto LABEL_71;
                  }
                }
                ++v32;
              }
              while ( v32 < v9 );
              if ( (int)v59 > 0 )
              {
                v68[7] = 0LL;
                ConnectorFXModeEffectPKEY = SystemEffectDescriptor::CreateOverridingChain(
                                              v66,
                                              (struct CAudioSignalProcessingModeArray *)&v58,
                                              0,
                                              0LL,
                                              2,
                                              1,
                                              (__int64)v68);
                v15 = ConnectorFXModeEffectPKEY;
                if ( ConnectorFXModeEffectPKEY < 0 )
                {
                  v50 = 2258LL;
                  goto LABEL_70;
                }
              }
            }
            CoTaskMemFree(v25);
            CoTaskMemFree(v24);
            CoTaskMemFree(v8);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v58);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v55);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v60);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v56);
            return 0LL;
          }
          v50 = 2234LL;
        }
      }
    }
LABEL_70:
    v49 = (unsigned int)ConnectorFXModeEffectPKEY;
    goto LABEL_71;
  }
  v11 = (unsigned int)v5;
  if ( (_DWORD)v5 )
  {
    v11 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 == 1 )
    {
      v12 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
      v13 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
    }
    else
    {
      if ( (_DWORD)v5 != 3 )
      {
        v47 = 2197LL;
        v15 = -2147023728;
        v48 = 2147943568LL;
        goto LABEL_58;
      }
      v12 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
      v13 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
    }
  }
  else
  {
    v12 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
    v13 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
  }
  v52.fmtid = v12;
  v52.pid = v13;
  APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                    (CEndpointCharacteristics *)v11,
                                    v10,
                                    &v52,
                                    1,
                                    (struct CAudioSignalProcessingModeArray *)v60);
  v15 = APOModesSupportedForStreaming;
  if ( APOModesSupportedForStreaming < 0 )
  {
    v48 = (unsigned int)APOModesSupportedForStreaming;
    v47 = 2198LL;
  }
  else
  {
    v16 = (unsigned int)v5;
    if ( (_DWORD)v5 )
    {
      v16 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 == 1 )
      {
        v17 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        v18 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        v17 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v18 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      }
    }
    else
    {
      v17 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
      v18 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
    }
    v52.fmtid = v17;
    v52.pid = v18;
    v19 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
            (CEndpointCharacteristics *)v16,
            *((struct IPropertyStore **)this + 8),
            &v52,
            0,
            (struct CAudioSignalProcessingModeArray *)v56);
    v15 = v19;
    if ( v19 < 0 )
    {
      v48 = (unsigned int)v19;
      v47 = 2202LL;
    }
    else
    {
      if ( (int)v5 > 1 )
      {
        v21 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v22 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        v21 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
        v22 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
      }
      v52.fmtid = v21;
      v52.pid = v22;
      v23 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
              v20,
              *((struct IPropertyStore **)this + 8),
              &v52,
              0,
              (struct CAudioSignalProcessingModeArray *)&v55);
      v15 = v23;
      if ( v23 >= 0 )
      {
        v9 = v57;
        v7 = v5;
        goto LABEL_18;
      }
      v48 = (unsigned int)v23;
      v47 = 2206LL;
    }
  }
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v47,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v48);
LABEL_72:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v58);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v55);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v60);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v56);
  return v15;
}
