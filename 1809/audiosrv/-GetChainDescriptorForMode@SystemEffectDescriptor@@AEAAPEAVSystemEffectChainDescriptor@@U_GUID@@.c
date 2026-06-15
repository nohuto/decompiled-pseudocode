/*
 * XREFs of ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18005E61C
 * Callers:
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004CC48 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18005E5E0 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180111288 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // edi
  __int64 v6; // r11
  int v8; // edi
  __int64 v9; // rbp
  __int64 **v10; // rax
  __int64 v11; // rax
  volatile signed __int32 *v12; // rdi
  __int64 **v13; // rax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+38h] [rbp-30h]
  SystemEffectChainDescriptor *v17; // [rsp+40h] [rbp-28h]
  volatile signed __int32 *v18; // [rsp+48h] [rbp-20h]

  v15 = -2LL;
  v14 = *(_OWORD *)a2;
  if ( !a3 )
  {
    v8 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v9 = a1 + 32;
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, v8)
                      + 20LL) )
        {
          v10 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, v8);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v10, &v14) != -1 )
            break;
        }
        if ( ++v8 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_2;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      v16 = a1 + 56;
      v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, v8);
      v12 = *(volatile signed __int32 **)(v11 + 8);
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v12 = *(volatile signed __int32 **)(v11 + 8);
      }
      v17 = *(SystemEffectChainDescriptor **)v11;
      v18 = v12;
      if ( (int)SystemEffectChainDescriptor::Resolve(v17, (struct SystemEffectDescriptor *)a1) < 0 )
      {
        if ( v12 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
        if ( a1 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
        goto LABEL_5;
      }
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    }
  }
LABEL_2:
  v5 = 0;
  if ( *(int *)(a1 + 40) > 0 )
  {
    while ( 1 )
    {
      v13 = (__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, v5);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v13, &v14) != -1 )
        break;
      if ( ++v5 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v5 = -1;
  }
  if ( v5 != -1 )
    return *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, v5);
LABEL_5:
  if ( !*(_QWORD *)(a1 + 16)
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(__int64 **)(a1 + 16), a2) == -1 )
  {
    return 0LL;
  }
  return v6;
}
