/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18004CA54
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004BC40 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18003DB60 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004DF8C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005E570 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005EFD4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics *this)
{
  unsigned int v2; // r15d
  int v3; // r14d
  int DefaultEffectChainClsids; // eax
  unsigned int v5; // ebx
  struct _GUID **v6; // r12
  __int64 v7; // xmm6_8
  struct _GUID v8; // xmm7
  __int64 *v9; // r11
  struct _GUID v10; // xmm0
  int v12; // eax
  int OverridingChain; // eax
  __int64 v14; // rdx
  __int64 *v15; // r11
  BOOL v16; // r14d
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-E0h]
  unsigned int v19; // [rsp+48h] [rbp-C0h] BYREF
  GUID v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 SupportedConnectorModesInternal; // [rsp+68h] [rbp-A0h]
  _QWORD v22[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h]
  _QWORD *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  struct _GUID v26; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h]
  CLSID pClsid; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v25 = -2LL;
  v2 = 0;
  if ( *((_DWORD *)this + 39)
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this)
    && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  *(_QWORD *)&v26.Data1 = this;
  *(_QWORD *)v26.Data4 = this;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    v3 = 0;
    v20 = (GUID)0LL;
    SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal((__int64)this, 0, 0);
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (CEndpointCharacteristics *)((char *)this + 232),
                                 (struct CAudioSignalProcessingModeArray *)&v20,
                                 &v19,
                                 0LL);
    v5 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v6 = off_180157910;
      v7 = v27;
      v8 = v26;
      v9 = (__int64 *)SupportedConnectorModesInternal;
      do
      {
        v10 = **v6;
        v26 = v10;
        v19 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v9, &v26);
        if ( v19 != -1
          || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&v20, &v26) != -1 )
        {
          v22[0] = off_180157AC0;
          *(struct _GUID *)&v22[1] = v8;
          v23 = v7;
          v24 = v22;
          v26 = v10;
          DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                       (int)this + 232,
                                       (unsigned int)&v26,
                                       1,
                                       (unsigned int)&unk_1801B2620,
                                       1,
                                       v19 != -1,
                                       (__int64)v22);
          v5 = DefaultEffectChainClsids;
          if ( DefaultEffectChainClsids < 0 )
          {
            v14 = 1651LL;
            goto LABEL_20;
          }
          ++v3;
          v9 = (__int64 *)SupportedConnectorModesInternal;
        }
        ++v2;
        ++v6;
      }
      while ( v2 < 3 );
      if ( !v3
        && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v9,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
      {
        v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                v15,
                &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1;
        v22[0] = off_180157AC0;
        *(struct _GUID *)&v22[1] = v8;
        v23 = v7;
        v24 = v22;
        v26 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     (int)this + 232,
                                     (unsigned int)&v26,
                                     1,
                                     (unsigned int)&unk_1801B2620,
                                     1,
                                     v16,
                                     (__int64)v22);
        v5 = DefaultEffectChainClsids;
        if ( DefaultEffectChainClsids < 0 )
        {
          v14 = 1665LL;
          goto LABEL_20;
        }
        v26 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        if ( !(unsigned int)CEndpointCharacteristics::IsAPOModeSupported(this, &v26, eHostProcessConnector) )
        {
          v24 = 0LL;
          v26 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                       (int)this + 616,
                                       (unsigned int)&v26,
                                       0,
                                       0,
                                       2,
                                       v16,
                                       (__int64)v22);
          v5 = DefaultEffectChainClsids;
          if ( DefaultEffectChainClsids < 0 )
          {
            v14 = 1672LL;
            goto LABEL_20;
          }
        }
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v20);
      return 0LL;
    }
    v14 = 1637LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids,
      v17);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v20);
    return v5;
  }
  v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
          (__int64 *)this + 9,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  v22[0] = off_180157AC0;
  *(struct _GUID *)&v22[1] = v26;
  v23 = v27;
  v24 = v22;
  v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (int)this + 232,
                      (unsigned int)&v20,
                      1,
                      (unsigned int)&unk_1801B2620,
                      1,
                      v12 != -1,
                      (__int64)v22);
  v5 = OverridingChain;
  if ( OverridingChain >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x657,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain,
    v18);
  return v5;
}
