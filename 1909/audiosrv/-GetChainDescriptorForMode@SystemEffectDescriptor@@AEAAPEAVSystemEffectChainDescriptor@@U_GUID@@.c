/*
 * XREFs of ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000DE4C
 * Callers:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18000759C (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000DDEC (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180052594 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000BC68 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000DED8 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode(__int64 a1, __int128 *a2)
{
  int OverridingChainDescriptorIndex; // eax
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = *a2;
  OverridingChainDescriptorIndex = SystemEffectDescriptor::GetOverridingChainDescriptorIndex(a1, &v10);
  if ( OverridingChainDescriptorIndex != -1 )
    return *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        a1 + 32,
                        OverridingChainDescriptorIndex);
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 0LL;
  v6 = 0;
  if ( *(int *)(v5 + 8) <= 0 )
  {
LABEL_8:
    v6 = -1;
  }
  else
  {
    while ( 1 )
    {
      v7 = (_QWORD *)(*(_QWORD *)v5 + 16LL * v6);
      v8 = *v7 - *(_QWORD *)a2;
      if ( *v7 == *(_QWORD *)a2 )
        v8 = v7[1] - *((_QWORD *)a2 + 1);
      if ( !v8 )
        break;
      if ( ++v6 >= *(_DWORD *)(v5 + 8) )
        goto LABEL_8;
    }
  }
  if ( v6 == -1 )
    return 0LL;
  return v5;
}
