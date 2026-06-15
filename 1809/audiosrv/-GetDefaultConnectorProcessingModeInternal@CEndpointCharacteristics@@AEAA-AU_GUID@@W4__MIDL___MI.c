/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180012E8C
 * Callers:
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800025DC (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012DF0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180033470 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18010A5A8 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18003DAF8 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
        CEndpointCharacteristics *a1,
        GUID *a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v6; // ebx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // eax
  _QWORD *v14; // rdx
  GUID v15; // xmm0
  _QWORD *v16; // rax
  GUID *result; // rax

  v4 = 0;
  v6 = 0;
  if ( a3 != 2 )
    v6 = a3;
  if ( v6 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(a1) )
  {
    v10 = v6;
    if ( !a4 )
    {
      v11 = 96LL * v6;
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + 96 * v10 + 232));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v11 + 616));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v11 + 1000));
    }
    v9 = (__int64)a1 + 16 * v10 + 72;
  }
  else
  {
    v9 = (__int64)a1 + 136;
  }
  v12 = *(_DWORD *)(v9 + 8);
  if ( v12 )
  {
    v13 = 0;
    if ( v12 <= 0 )
    {
LABEL_14:
      v13 = -1;
    }
    else
    {
      while ( 1 )
      {
        v14 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v13);
        if ( *v14 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
          && v14[1] == *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
        {
          break;
        }
        if ( ++v13 >= v12 )
          goto LABEL_14;
      }
    }
    if ( v13 == -1 )
    {
      if ( v12 <= 0 )
      {
LABEL_21:
        v4 = -1;
      }
      else
      {
        while ( 1 )
        {
          v16 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v4);
          if ( *v16 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
            && v16[1] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
          {
            break;
          }
          if ( ++v4 >= v12 )
            goto LABEL_21;
        }
      }
      if ( v4 == -1 )
        v15 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, 0LL);
      else
        v15 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v15 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = a2;
  *a2 = v15;
  return result;
}
