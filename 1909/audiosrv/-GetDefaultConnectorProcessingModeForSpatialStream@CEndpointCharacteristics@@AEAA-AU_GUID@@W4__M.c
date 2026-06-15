/*
 * XREFs of ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000E498
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18000162C (-GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAud.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x180004998 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800089A4 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000D900 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180117214 (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWA.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E004 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000F630 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
        CEndpointCharacteristics *this,
        struct _GUID *__return_ptr retstr,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  int v5; // edi
  __int64 v6; // rax
  char *v7; // r11
  _QWORD *v8; // rax
  GUID v9; // xmm0
  __int64 v10; // r11
  struct _GUID *result; // rax

  v5 = 0;
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(this) )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + 232));
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + 616));
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + 1000));
    v6 = 72LL;
  }
  else
  {
    v6 = 136LL;
  }
  v7 = (char *)this + v6;
  if ( *(_DWORD *)((char *)this + v6 + 8) )
  {
    if ( *(int *)((char *)this + v6 + 8) <= 0 )
    {
LABEL_9:
      v5 = -1;
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(*(_QWORD *)v7 + 16LL * v5);
        if ( *v8 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
          && v8[1] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
        {
          break;
        }
        if ( ++v5 >= *((_DWORD *)v7 + 2) )
          goto LABEL_9;
      }
    }
    if ( v5 == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           (__int64 *)v7,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        v9 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v10, 0);
      else
        v9 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    else
    {
      v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = retstr;
  *retstr = v9;
  return result;
}
