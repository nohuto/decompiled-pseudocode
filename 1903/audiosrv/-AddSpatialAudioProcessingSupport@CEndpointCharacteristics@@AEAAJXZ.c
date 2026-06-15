/*
 * XREFs of ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180061E4C
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180054FB0 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180004230 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18000757C (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000AB3C (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180037F34 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800568C0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180056A74 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     std::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)___lambda_903ccf9134cc2c82d7843578f8252e54__void_ @ 0x180066E50 (std--function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_--function_lo.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180115CB0 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18011A3C8 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddSpatialAudioProcessingSupport(CEndpointCharacteristics *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int SystemEffectClsidsForMode; // ebx
  __int64 ChainDescriptorForMode; // rax
  __int64 v7; // rax
  int v8; // r11d
  int v9; // eax
  unsigned int v10; // ebx
  GUID **v11; // r15
  _OWORD *v12; // rdx
  int OverridingChain; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  GUID v19; // [rsp+48h] [rbp-79h] BYREF
  __int64 v20; // [rsp+58h] [rbp-69h]
  GUID v21; // [rsp+68h] [rbp-59h] BYREF
  __int64 v22; // [rsp+78h] [rbp-49h] BYREF
  __int128 v23; // [rsp+80h] [rbp-41h]
  __int64 v24; // [rsp+90h] [rbp-31h]
  __int64 *v25; // [rsp+B0h] [rbp-11h]
  _BYTE v26[24]; // [rsp+B8h] [rbp-9h]
  __int64 v27; // [rsp+D0h] [rbp+Fh]
  GUID v28; // [rsp+D8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v27 = -2LL;
  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this) )
    return 0LL;
  v28 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  *(_QWORD *)v26 = this;
  *(GUID *)&v26[8] = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, 0) )
  {
    if ( *((_DWORD *)this + 20) == 1 )
    {
      v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode((__int64)this + 1000, (__int128 *)&v19);
      if ( ChainDescriptorForMode
        && *(_DWORD *)(ChainDescriptorForMode + 48)
        && (unsigned int)CEndpointCharacteristics::FormFactor(this) == 9 )
      {
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
          (__int64 *)this + 9,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v19 = *(GUID *)v26;
        v20 = *(_QWORD *)&v26[16];
        v7 = std::function_long___cdecl_SystemEffectDescriptor___SystemEffectChainDescriptor____::function_long___cdecl_SystemEffectDescriptor___SystemEffectChainDescriptor______lambda_903ccf9134cc2c82d7843578f8252e54__void_(
               &v22,
               &v19);
        v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                      (CEndpointCharacteristics *)((char *)this + 1000),
                                      &v19,
                                      1LL,
                                      (__int64)&v28,
                                      1,
                                      v8 != -1,
                                      v7);
        if ( SystemEffectClsidsForMode < 0 )
        {
          v3 = 1430LL;
          goto LABEL_6;
        }
      }
      else
      {
        v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
               (__int64 *)this + 9,
               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v25 = 0LL;
        v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                      (CEndpointCharacteristics *)((char *)this + 1000),
                                      &v19,
                                      1LL,
                                      (__int64)&v28,
                                      1,
                                      v9 != -1,
                                      (__int64)&v22);
        if ( SystemEffectClsidsForMode < 0 )
        {
          v3 = 1435LL;
          goto LABEL_6;
        }
      }
      return 0LL;
    }
    v19 = (GUID)0LL;
    v10 = 0;
    v11 = off_18015EC50;
    do
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)this + 9, *v11) != -1 )
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v19, v12);
      ++v10;
      ++v11;
    }
    while ( v10 < 4 );
    if ( *(int *)v19.Data4 > 0 )
    {
      v25 = 0LL;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          (CEndpointCharacteristics *)((char *)this + 616),
                          (struct CAudioSignalProcessingModeArray *)&v19,
                          1u,
                          (__int64)&v28,
                          1,
                          1,
                          (__int64)&v22);
      SystemEffectClsidsForMode = OverridingChain;
      if ( OverridingChain < 0 )
      {
        v14 = (unsigned int)OverridingChain;
        v15 = 1458LL;
LABEL_47:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v14);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v19);
        return (unsigned int)SystemEffectClsidsForMode;
      }
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)this + 9,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1
      && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)this + 9,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1 )
    {
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)this + 72,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        SystemEffectClsidsForMode = -2147024882;
        v15 = 1467LL;
LABEL_46:
        v14 = (unsigned int)SystemEffectClsidsForMode;
        goto LABEL_47;
      }
      v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)this + 9,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      if ( v16 == -1
        || !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt((char *)this + 72, v16) )
      {
        SystemEffectClsidsForMode = -2147418113;
        v15 = 1470LL;
        goto LABEL_46;
      }
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            (char *)this + 1400,
                            v17,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        SystemEffectClsidsForMode = -2147024882;
        v15 = 1471LL;
        goto LABEL_46;
      }
      *((_DWORD *)this + 346) = 1;
      v25 = 0LL;
      v21 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v18 = SystemEffectDescriptor::CreateOverridingChain(
              (CEndpointCharacteristics *)((char *)this + 616),
              &v21,
              1LL,
              (__int64)&v28,
              1,
              0,
              (__int64)&v22);
      SystemEffectClsidsForMode = v18;
      if ( v18 < 0 )
      {
        v14 = (unsigned int)v18;
        v15 = 1475LL;
        goto LABEL_47;
      }
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v19);
    return 0LL;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 72);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        (__int64)this + 72,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v3 = 1374LL;
LABEL_5:
    SystemEffectClsidsForMode = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)SystemEffectClsidsForMode);
    return (unsigned int)SystemEffectClsidsForMode;
  }
  *((_DWORD *)this + 346) = 1;
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        (char *)this + 1400,
                        v2,
                        &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v3 = 1378LL;
    goto LABEL_5;
  }
  v21.Data1 = 0;
  v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(
                                (__int64)this + 616,
                                (__int128 *)&v19,
                                0,
                                &v21,
                                0LL,
                                1u);
  if ( SystemEffectClsidsForMode < 0 )
  {
    v3 = 1386LL;
    goto LABEL_6;
  }
  if ( v21.Data1 && (unsigned int)CEndpointCharacteristics::FormFactor(this) == 9 )
  {
    v22 = (__int64)off_180153638;
    v23 = *(_OWORD *)v26;
    v24 = *(_QWORD *)&v26[16];
    v25 = &v22;
    v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                  (CEndpointCharacteristics *)((char *)this + 616),
                                  &v19,
                                  1LL,
                                  (__int64)&v28,
                                  1,
                                  1,
                                  (__int64)&v22);
    if ( SystemEffectClsidsForMode < 0 )
    {
      v3 = 1396LL;
      goto LABEL_6;
    }
  }
  else
  {
    v25 = 0LL;
    v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                  (CEndpointCharacteristics *)((char *)this + 616),
                                  &v19,
                                  1LL,
                                  (__int64)&v28,
                                  1,
                                  1,
                                  (__int64)&v22);
    if ( SystemEffectClsidsForMode < 0 )
    {
      v3 = 1400LL;
      goto LABEL_6;
    }
  }
  v25 = 0LL;
  v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                (CEndpointCharacteristics *)((char *)this + 616),
                                &v19,
                                1LL,
                                (__int64)&v28,
                                2,
                                0,
                                (__int64)&v22);
  if ( SystemEffectClsidsForMode < 0 )
  {
    v3 = 1404LL;
    goto LABEL_6;
  }
  return 0LL;
}
