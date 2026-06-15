/*
 * XREFs of ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004CC48
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004BC40 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18000665C (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18003DB60 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004DF8C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004E090 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18005E61C (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180111288 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddSpatialAudioProcessingSupport(CEndpointCharacteristics *this)
{
  __int64 ChainDescriptorForMode; // rax
  int v3; // eax
  int v4; // ebx
  int SystemEffectClsidsForMode; // eax
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  SystemEffectDescriptor *v12; // r15
  __int64 *SupportedConnectorModesInternal; // r14
  unsigned int v14; // ebx
  GUID **v15; // rsi
  __int64 v16; // rdx
  int OverridingChain; // eax
  int v18; // [rsp+28h] [rbp-79h]
  int v19; // [rsp+28h] [rbp-79h]
  GUID v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+58h] [rbp-49h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+60h] [rbp-41h] BYREF
  __int128 v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+78h] [rbp-29h]
  __int64 (__fastcall ***v25)(); // [rsp+98h] [rbp-9h]
  _BYTE v26[24]; // [rsp+A0h] [rbp-1h]
  __int64 v27; // [rsp+B8h] [rbp+17h]
  GUID v28; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v27 = -2LL;
  if ( *((_DWORD *)this + 39) )
    return 0LL;
  v28 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  *(_QWORD *)v26 = this;
  *(GUID *)&v26[8] = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    if ( *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal((__int64)this, 0, 0) + 8) != 1 )
    {
      v12 = (CEndpointCharacteristics *)((char *)this + 616);
      SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                     (__int64)this,
                                                     0,
                                                     0);
      v20 = (GUID)0LL;
      v14 = 0;
      v15 = off_180159B90;
      do
      {
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             SupportedConnectorModesInternal,
                             *v15) != -1 )
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v20, v16);
        ++v14;
        ++v15;
      }
      while ( v14 < 4 );
      if ( *(int *)v20.Data4 > 0 )
      {
        v25 = 0LL;
        OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                            v12,
                            (struct CAudioSignalProcessingModeArray *)&v20,
                            1,
                            1,
                            (__int64)&v22);
        v4 = OverridingChain;
        if ( OverridingChain < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59C,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)OverridingChain,
            v19);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v20);
          return (unsigned int)v4;
        }
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v20);
      return 0LL;
    }
    v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode((char *)this + 1000, &v20, 1LL);
    if ( ChainDescriptorForMode
      && *(_DWORD *)(ChainDescriptorForMode + 48)
      && (unsigned int)CEndpointCharacteristics::FormFactor(this) == 9 )
    {
      v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)this + 9,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v22 = off_1801586B0;
      v23 = *(_OWORD *)v26;
      v24 = *(_QWORD *)&v26[16];
      v25 = &v22;
      v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v4 = SystemEffectDescriptor::CreateOverridingChain(
             (int)this + 1000,
             (unsigned int)&v20,
             1,
             (unsigned int)&v28,
             1,
             v11 != -1,
             (__int64)&v22);
      if ( v4 < 0 )
      {
        v9 = 1408LL;
        goto LABEL_14;
      }
      return 0LL;
    }
    v3 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           (__int64 *)this + 9,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v25 = 0LL;
    v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v4 = SystemEffectDescriptor::CreateOverridingChain(
           (int)this + 1000,
           (unsigned int)&v20,
           1,
           (unsigned int)&v28,
           1,
           v3 != -1,
           (__int64)&v22);
    if ( v4 >= 0 )
      return 0LL;
    v9 = 1413LL;
  }
  else
  {
    v21 = 0;
    v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(
                                  (char *)this + 616,
                                  &v20,
                                  0LL,
                                  &v21);
    v7 = SystemEffectClsidsForMode;
    if ( SystemEffectClsidsForMode < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x554,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SystemEffectClsidsForMode,
        0);
      return v7;
    }
    if ( v21 && (unsigned int)CEndpointCharacteristics::FormFactor(this) == 9 )
    {
      v8 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
             (__int64 *)this + 9,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v22 = off_1801586B0;
      v23 = *(_OWORD *)v26;
      v24 = *(_QWORD *)&v26[16];
      v25 = &v22;
      v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v4 = SystemEffectDescriptor::CreateOverridingChain(
             (int)this + 616,
             (unsigned int)&v20,
             1,
             (unsigned int)&v28,
             1,
             v8 != -1,
             (__int64)&v22);
      if ( v4 >= 0 )
        return 0LL;
      v9 = 1376LL;
    }
    else
    {
      v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)this + 9,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v25 = 0LL;
      v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v4 = SystemEffectDescriptor::CreateOverridingChain(
             (int)this + 616,
             (unsigned int)&v20,
             1,
             (unsigned int)&v28,
             1,
             v10 != -1,
             (__int64)&v22);
      if ( v4 >= 0 )
        return 0LL;
      v9 = 1381LL;
    }
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4,
    v18);
  return (unsigned int)v4;
}
