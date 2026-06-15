/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000E2F0
 * Callers:
 *     ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800076B4 (-CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180007B80 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180008490 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E06C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000E10C (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000E620 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000F630 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
        __int64 a1,
        GUID *a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v6; // r14d
  __int64 v9; // rcx
  BOOL v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // eax
  _QWORD *v15; // rdx
  GUID v16; // xmm0
  _QWORD *v17; // rax
  GUID *result; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v6 = 0;
  if ( a3 != 2 )
    v6 = a3;
  if ( v6 )
    goto LABEL_10;
  v9 = *(_QWORD *)(a1 + 64);
  v10 = 1;
  if ( !v9 )
    goto LABEL_10;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
         v9,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v10 = v20 == 0;
  }
  PropVariantClear(&pvar);
  if ( v10 )
  {
LABEL_10:
    if ( !a4 )
    {
      v12 = 96LL * v6;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + a1 + 232));
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + a1 + 616));
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + a1 + 1000));
    }
    v11 = 16LL * v6 + a1 + 72;
  }
  else
  {
    v11 = a1 + 136;
  }
  v13 = *(_DWORD *)(v11 + 8);
  if ( v13 )
  {
    v14 = 0;
    if ( v13 <= 0 )
    {
LABEL_18:
      v14 = -1;
    }
    else
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(*(_QWORD *)v11 + 16LL * v14);
        if ( *v15 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
          && v15[1] == *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
        {
          break;
        }
        if ( ++v14 >= v13 )
          goto LABEL_18;
      }
    }
    if ( v14 == -1 )
    {
      if ( v13 <= 0 )
      {
LABEL_25:
        v4 = -1;
      }
      else
      {
        while ( 1 )
        {
          v17 = (_QWORD *)(*(_QWORD *)v11 + 16LL * v4);
          if ( *v17 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
            && v17[1] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
          {
            break;
          }
          if ( ++v4 >= v13 )
            goto LABEL_25;
        }
      }
      if ( v4 == -1 )
        v16 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v11, 0);
      else
        v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v16 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v16 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = a2;
  *a2 = v16;
  return result;
}
