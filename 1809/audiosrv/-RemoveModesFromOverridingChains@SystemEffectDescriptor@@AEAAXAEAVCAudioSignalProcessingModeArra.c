/*
 * XREFs of ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004FA24
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004E090 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18010CBDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?RemoveAt@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHH@Z @ 0x180111BDC (-RemoveAt@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualH.c)
 */

void __fastcall SystemEffectDescriptor::RemoveModesFromOverridingChains(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2)
{
  int i; // edi
  unsigned int v5; // edi
  int j; // esi
  __int64 *v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // eax

  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    for ( j = 0; j < *((_DWORD *)a2 + 2); ++j )
    {
      v7 = *(__int64 **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 32, i);
      v8 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a2, j);
      v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v7, v8);
      if ( v9 != -1 )
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v7, v9);
    }
  }
  while ( 1 )
  {
    v5 = 0;
    if ( *((int *)this + 10) <= 0 )
      break;
    while ( *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     (__int64)this + 32,
                                     v5)
                      + 8LL) )
    {
      if ( (signed int)++v5 >= *((_DWORD *)this + 10) )
        return;
    }
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAt(
      (char *)this + 32,
      v5);
  }
}
