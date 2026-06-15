/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSystemEffectChainDescriptor@@@std@@EEAAXXZ @ 0x18011E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj<SystemEffectChainDescriptor>::_Destroy(__int64 a1)
{
  __int64 v1; // rbx
  std::_Ref_count_base *v2; // rcx

  v1 = a1 + 16;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1 + 72);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v1 + 40);
  v2 = *(std::_Ref_count_base **)(v1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v1);
}
