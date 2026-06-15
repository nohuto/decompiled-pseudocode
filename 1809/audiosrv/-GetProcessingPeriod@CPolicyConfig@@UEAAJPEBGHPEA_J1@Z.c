/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180033470
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180012E8C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032140 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180034EA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18003DAF8 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18003DB60 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800D5A40 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int v5; // esi
  int ProposedConnectorFormatForProcessingMode; // edi
  CEndpointCharacteristics *v9; // r14
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  __int128 *DefaultConnectorProcessingModeInternal; // rax
  __int128 v15; // xmm6
  __int64 SupportedConnectorModesInternal; // rax
  __int64 v17; // r11
  GUID v18; // xmm0
  __int64 v19; // r11
  int *v20; // rbx
  LPVOID v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  CEndpointCharacteristics *v25; // [rsp+60h] [rbp-A8h] BYREF
  PROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 *v28; // [rsp+78h] [rbp-90h]
  __m256i v29; // [rsp+88h] [rbp-80h] BYREF
  __m256i v30; // [rsp+A8h] [rbp-60h] BYREF
  GUID v31; // [rsp+C8h] [rbp-40h] BYREF

  v5 = 0;
  v25 = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                               g_pEndpointCharacteristicsCache,
                                               a2,
                                               0LL,
                                               0LL,
                                               &v25);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_8;
  v9 = v25;
  ProposedConnectorFormatForProcessingMode = 0;
  pvar = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !v25 )
    goto LABEL_5;
  if ( a4 )
  {
    if ( !a5 )
    {
LABEL_41:
      if ( a4 )
      {
        if ( a3 )
        {
          *a4 = 100000LL;
        }
        else
        {
          while ( 1 )
          {
            ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v9 + 5) + 40LL))(
                                                         *((_QWORD *)v9 + 5),
                                                         &PKEY_AudioEngine_Period,
                                                         &pvar);
            if ( ProposedConnectorFormatForProcessingMode < 0 )
              break;
            if ( (_WORD)pvar != 65 )
            {
              if ( !(_WORD)pvar )
              {
                *a4 = 100000LL;
                ProposedConnectorFormatForProcessingMode = CPolicyConfig::SetProcessingPeriodInternal(v9, a4);
                goto LABEL_6;
              }
LABEL_57:
              ProposedConnectorFormatForProcessingMode = -2147024809;
              goto LABEL_6;
            }
            if ( (_DWORD)v27 != 8 )
              goto LABEL_57;
            v23 = *v28;
            *a4 = *v28;
            if ( v23 )
              goto LABEL_6;
            if ( (unsigned int)++v5 >= 0x7D0 )
            {
              ProposedConnectorFormatForProcessingMode = -2147467259;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids);
              }
              goto LABEL_6;
            }
            Sleep(5u);
          }
        }
      }
      else
      {
        ProposedConnectorFormatForProcessingMode = 0;
      }
      goto LABEL_6;
    }
LABEL_16:
    pv = 0LL;
    *(GUID *)v30.m256i_i8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v25) )
    {
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v9 + 232));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v9 + 616));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v9 + 1000));
      v11 = 72LL;
    }
    else
    {
      v11 = 136LL;
    }
    v12 = *(_DWORD *)((char *)v9 + v11 + 8);
    v13 = 0;
    if ( v12 <= 0 )
      goto LABEL_22;
    while ( *(_OWORD *)(*(_QWORD *)((char *)v9 + v11) + 16LL * v13) != *(_OWORD *)v30.m256i_i8 )
    {
      if ( ++v13 >= v12 )
        goto LABEL_22;
    }
    if ( v13 == -1 )
    {
LABEL_22:
      DefaultConnectorProcessingModeInternal = (__int128 *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                                             v9,
                                                             &v31,
                                                             0,
                                                             0);
    }
    else
    {
      DefaultConnectorProcessingModeInternal = (__int128 *)&v30;
      *(GUID *)v30.m256i_i8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    v15 = *DefaultConnectorProcessingModeInternal;
    *a5 = 0LL;
    *(_OWORD *)v30.m256i_i8 = v15;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                 v9,
                                                 eHostProcessConnector,
                                                 (struct _GUID *)&v30,
                                                 (struct tWAVEFORMATEX **)&pv);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
    {
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(v9, 0LL, 1LL);
      if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
      {
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             SupportedConnectorModesInternal,
                             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               v17,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
            v18 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v19, 0LL);
          else
            v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
        else
        {
          v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        }
      }
      else
      {
        v18 = GUID_00000000_0000_0000_0000_000000000000;
      }
      *(GUID *)((char *)&v30.m256i_u64[1] + 4) = v18;
      v30.m256i_i64[0] = (__int64)v9;
      v30.m256i_i32[2] = 0;
      v29 = v30;
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
                                                   v9,
                                                   (__int64)&v29,
                                                   (__int64)&pv);
    }
    v20 = (int *)pv;
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      v21 = pv;
      *a5 = 30000LL;
      *(_OWORD *)v30.m256i_i8 = v15;
      if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v9, 0LL, v21, &v30, 0, 0LL, 0LL, &pv, 0LL) >= 0 )
      {
        v22 = (unsigned int)(int)((double)(int)pv * 10000000.0 / (double)v20[1] + 0.5);
        if ( v22 >= *a5 )
          v22 = *a5;
        *a5 = v22;
      }
      ProposedConnectorFormatForProcessingMode = 0;
    }
    CoTaskMemFree(v20);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_6;
    goto LABEL_41;
  }
  if ( a5 )
    goto LABEL_16;
LABEL_5:
  ProposedConnectorFormatForProcessingMode = -2147467261;
LABEL_6:
  PropVariantClear(&pvar);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
    goto LABEL_12;
  AudSrvTraceLoggingErrorHelper(
    "CPolicyConfig::GetProcessingPeriodInternal",
    3726,
    ProposedConnectorFormatForProcessingMode);
LABEL_8:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
      (unsigned int)ProposedConnectorFormatForProcessingMode);
  }
LABEL_12:
  if ( v25 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
