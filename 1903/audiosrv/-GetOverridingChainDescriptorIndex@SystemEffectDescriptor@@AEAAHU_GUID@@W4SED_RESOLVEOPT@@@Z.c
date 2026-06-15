/*
 * XREFs of ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000ABC8
 * Callers:
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000AB3C (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18003E8BC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetOverridingChainDescriptorIndex(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 *v9; // rcx
  int v10; // eax
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx

  if ( !a3 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v6 = a1 + 32;
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, v5)
                      + 20LL) )
        {
          v14 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, v5);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v14, a2) != -1 )
            break;
        }
        if ( (signed int)++v5 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_6;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      v15 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, v5);
      v16 = *(volatile signed __int32 **)(v15 + 8);
      if ( v16 )
      {
        _InterlockedIncrement(v16 + 2);
        v16 = *(volatile signed __int32 **)(v15 + 8);
      }
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)v15,
                  (struct SystemEffectDescriptor *)a1) < 0 )
      {
        if ( v16 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
        if ( a1 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
        return 0xFFFFFFFFLL;
      }
      if ( v16 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    }
  }
LABEL_6:
  v7 = 0;
  if ( *(int *)(a1 + 40) <= 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v9 = *(__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, v7);
    v10 = 0;
    v11 = *((_DWORD *)v9 + 2);
    if ( v11 <= 0 )
    {
LABEL_16:
      v10 = -1;
    }
    else
    {
      v12 = *v9;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v12 + 16LL * v10) - *a2;
        if ( !v13 )
          v13 = *(_QWORD *)(v12 + 16LL * v10 + 8) - a2[1];
        if ( !v13 )
          break;
        if ( ++v10 >= v11 )
          goto LABEL_16;
      }
    }
    if ( v10 != -1 )
      return v7;
    if ( (signed int)++v7 >= *(_DWORD *)(a1 + 40) )
      return 0xFFFFFFFFLL;
  }
}
