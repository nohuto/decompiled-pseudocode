/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180052AC0
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180053820 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BC94 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D790 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F4E8 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000F54C (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180055130 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x180063804 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r15d
  int v7; // r14d
  __int64 *SupportedConnectorModesInternal; // r13
  int DefaultEffectChainClsids; // eax
  unsigned int v10; // ebx
  struct _GUID **v11; // r12
  __int64 v12; // xmm6_8
  __int128 v13; // xmm7
  struct _GUID v14; // xmm0
  int v15; // r11d
  int v17; // eax
  int OverridingChain; // eax
  __int64 v19; // rdx
  BOOL v20; // r14d
  GUID v21; // [rsp+48h] [rbp-89h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+58h] [rbp-79h] BYREF
  __int128 v23; // [rsp+60h] [rbp-71h]
  __int64 v24; // [rsp+70h] [rbp-61h]
  __int64 (__fastcall ***v25)(); // [rsp+90h] [rbp-41h]
  __int128 v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A8h] [rbp-29h]
  __int64 v28; // [rsp+B0h] [rbp-21h]
  struct _GUID v29; // [rsp+B8h] [rbp-19h] BYREF
  CLSID pClsid; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v28 = -2LL;
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this)
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v3, v2, v4, v5)
    && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  *(_QWORD *)&v26 = this;
  *((_QWORD *)&v26 + 1) = this;
  if ( !(unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, 0) )
  {
    v17 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            (__int64 *)this + 9,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v22 = off_18015C4C0;
    v23 = v26;
    v24 = v27;
    v25 = &v22;
    v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                        (CEndpointCharacteristics *)((char *)this + 232),
                        1,
                        v17 != -1,
                        (__int64)&v22);
    v10 = OverridingChain;
    if ( OverridingChain < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67F,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OverridingChain);
      return v10;
    }
    return 0LL;
  }
  v7 = 0;
  v21 = (GUID)0LL;
  SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                 (__int64)this,
                                                 0,
                                                 0);
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               (CEndpointCharacteristics *)((char *)this + 232),
                               (struct CAudioSignalProcessingModeArray *)&v21,
                               &v29.Data1,
                               0LL);
  v10 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids < 0 )
  {
    v19 = 1677LL;
    goto LABEL_20;
  }
  v11 = off_18015C270;
  v12 = v27;
  v13 = v26;
  do
  {
    v14 = **v11;
    v29 = v14;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &v29) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&v21, &v29) == -1 )
        goto LABEL_9;
    }
    else
    {
      v15 = 1;
    }
    v22 = off_18015C4C0;
    v23 = v13;
    v24 = v12;
    v25 = &v22;
    v29 = v14;
    DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                 (CEndpointCharacteristics *)((char *)this + 232),
                                 1,
                                 v15,
                                 (__int64)&v22);
    v10 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids < 0 )
    {
      v19 = 1691LL;
      goto LABEL_20;
    }
    ++v7;
LABEL_9:
    ++v6;
    ++v11;
  }
  while ( v6 < 3 );
  if ( v7
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       SupportedConnectorModesInternal,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    goto LABEL_11;
  }
  v20 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
          SupportedConnectorModesInternal,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1;
  v22 = off_18015C4C0;
  v23 = v13;
  v24 = v12;
  v25 = &v22;
  v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                               (CEndpointCharacteristics *)((char *)this + 232),
                               1,
                               v20,
                               (__int64)&v22);
  v10 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids < 0 )
  {
    v19 = 1705LL;
    goto LABEL_20;
  }
  v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(this, &v29, eHostProcessConnector)
    || (v25 = 0LL,
        v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3,
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     (CEndpointCharacteristics *)((char *)this + 616),
                                     2,
                                     v20,
                                     (__int64)&v22),
        v10 = DefaultEffectChainClsids,
        DefaultEffectChainClsids >= 0) )
  {
LABEL_11:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
    return 0LL;
  }
  v19 = 1712LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
  return v10;
}
